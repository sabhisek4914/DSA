/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
 */

// @lc code=start
class Solution {
public:
    void allPermutations(vector<int>& nums,vector<vector<int>>& output, int l, int r){
        if(l==r){
            output.push_back(nums);
            return;
        }
        for(int i=l;i<=r;i++){
            swap(nums[i],nums[l]);
            allPermutations(nums,output,l+1,r);
            swap(nums[i],nums[l]);
        }
        // return;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> output;
        vector<int> c_op;
        allPermutations(nums,output,0,nums.size()-1);   
        return output;
    }
};
// @lc code=end

