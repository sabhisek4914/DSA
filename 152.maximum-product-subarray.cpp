/*
 * @lc app=leetcode id=152 lang=cpp
 *
 * [152] Maximum Product Subarray
 */

// @lc code=start
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod=1;
        int previous=1;
        int negative_cnt=0;
        int negative_prod=1;
        int large=INT_MIN;
        for (int i=0; i<nums.size(); i++){
            prod*=nums[i];
            large=max(large,prod);
            if(prod==0){
                prod=1;
            }
        }
        prod=1;
        for (int i=nums.size()-1; i>=0; i--){
            prod*=nums[i];
            large=max(large,prod);
            if(prod==0){
                prod=1;
            }
        }
        return large;
    }
};
// @lc code=end

