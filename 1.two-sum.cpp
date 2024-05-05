/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int,int> mp;
        for (int i = 0; i < nums.size();i++) {
            int req_sum=target-nums[i];
            if(mp.count(req_sum)){
                return vector<int>{mp[req_sum],i};
            }else{
                mp[nums[i]]=i;
            }
        }  
        return vector<int>{};
    }
};
// @lc code=end

