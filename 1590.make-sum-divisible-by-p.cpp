/*
 * @lc app=leetcode id=1590 lang=cpp
 *
 * [1590] Make Sum Divisible by P
 */

// @lc code=start
class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int prefix_sum = 0;
        int ans = nums.size();
        unordered_map<int,int> mp;
        mp[0]=-1;
        int total_sum=0;
        for(int i=0;i<nums.size();i++) {
            total_sum = (total_sum + nums[i])%p;
        }
        if(total_sum==0)
            return 0;

        for(int i=0;i<nums.size();i++) {
            prefix_sum=(prefix_sum+nums[i])%p;
            int check=((prefix_sum-total_sum)%p+p)%p;
            // cout<<prefix_sum<<":"<<check<<endl;
            if(mp.count(check)){
                ans=min(ans,i-mp[check]);
                // cout<<check<<":::::"<<ans<<endl;
            }
            mp[prefix_sum]=i;
        }
        if(ans==nums.size())
            return -1;
        return ans;
        
    }
};
// @lc code=end

