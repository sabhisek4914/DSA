/*
 * @lc app=leetcode id=47 lang=cpp
 *
 * [47] Permutations II
 */

// @lc code=start
class Solution {
public:
    void permutations(vector<vector<int>>& op,vector<int> nums,int s,int e){
        if(s==e){
            op.push_back(nums);
            return;
        }
        for(int i=s;i<=e;i++){
            if(nums[s]==nums[i] && i!=s)
                continue;
            // cout<<"1:"<<nums[i]<<" : "<<nums[s]<<endl;
            swap(nums[i],nums[s]);
            // cout<<"2:"<<nums[i]<<" : "<<nums[s]<<endl;
            permutations(op,nums,s+1,e);
            // swap(nums[i],nums[s]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> op;
        permutations(op,nums,0,nums.size()-1);
        return op;
    }
};
// @lc code=end

