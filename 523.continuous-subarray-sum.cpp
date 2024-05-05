/*
 * @lc app=leetcode id=523 lang=cpp
 *
 * [523] Continuous Subarray Sum
 */

// @lc code=start
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int prefix_sum=0;
        unordered_map<int,int> mp;
        mp[0]=-1;
        for(int i=0; i<nums.size();i++){
            prefix_sum+=nums[i];
            prefix_sum%=k;
            if(mp.count(prefix_sum)){
                if(i-mp[prefix_sum]>=2){
                    return true;
                }
            }else{
                mp[prefix_sum]=i;
            }
        }
        return false;        
    }
};
// @lc code=end

