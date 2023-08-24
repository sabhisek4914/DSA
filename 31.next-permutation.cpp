/*
 * @lc app=leetcode id=31 lang=cpp
 *
 * [31] Next Permutation
 */

// @lc code=start
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int k=n-1;
        while(k>0){
            if(nums[k]>nums[k-1]){
                int j=k+1;
                while(j < n && nums[k-1]<nums[j]){
                    j++;
                }
                swap(nums[j-1],nums[k-1]);
                break;
            }
            k--;
        }
        reverse(nums.begin()+k,nums.end());
        return;
    }
};
// @lc code=end

