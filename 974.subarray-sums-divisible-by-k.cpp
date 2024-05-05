/*
 * @lc app=leetcode id=974 lang=cpp
 *
 * [974] Subarray Sums Divisible by K
 */

// @lc code=start
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans=0,prefix_sum=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++) {
            prefix_sum+=nums[i];
            prefix_sum=((prefix_sum%k)+k)%k;
            if(mp.count(prefix_sum)){
                ans+=mp[prefix_sum];
            }
            mp[prefix_sum]++;
        }
        return ans;        
    }
};
// @lc code=end

