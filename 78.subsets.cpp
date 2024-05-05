/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */

// @lc code=start
class Solution {
public:
    void subsets(vector<int> nums, int index, vector<int> subsequence, vector<vector<int>>& resp){
        //base
        if(index==nums.size()){
            resp.push_back(subsequence);
            return;
        }
        //recursion
        //excluding current
        subsets(nums, index+1, subsequence, resp);
        //including current
        subsequence.push_back(nums[index]);
        subsets(nums, index+1, subsequence, resp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> resp;
        vector<int> subsequence;
        subsets(nums, 0, subsequence, resp);
        return resp;
    }
};
// @lc code=end

