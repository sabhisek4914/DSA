/*
 * @lc app=leetcode id=90 lang=cpp
 *
 * [90] Subsets II
 */

// @lc code=start
class Solution {
public:
    void func(int index,vector<int>& nums,vector<int>& ds,vector<vector<int>>& ans){
        ans.push_back(ds);
        for(int i = index;i<nums.size();i++){
            if(i != index && nums[i] == nums[i-1]){
                continue;
            }
            ds.push_back(nums[i]);
            func(i + 1,nums,ds,ans);
            ds.pop_back();
            
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        func(0,nums,ds,ans);
        return ans;
    }
    // void subsetsRecursion(set<vector<int>>& s,vector<int>& nums,vector<int> arr,int i){
    //     if(i==nums.size()){
    //         s.insert(arr);
    //         return;
    //     }
    //     //not considering current
    //     subsetsRecursion(s,nums,arr,i+1);
    //     //considering current
    //     arr.push_back(nums[i]);
    //     subsetsRecursion(s,nums,arr,i+1);
    // }
    // vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    //     vector<vector<int>> op;
    //     set<vector<int>> s;
    //     vector<int> arr;
    //     sort(nums.begin(),nums.end());
    //     subsetsRecursion(s,nums,arr,0);
    //     for(auto x:s){
    //         op.push_back(x);
    //     }
    //     return op;
    // }
};
// @lc code=end

