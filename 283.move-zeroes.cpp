/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=0;
        int r=0;
        while(r<nums.size()) {
            if(nums[r]!=0){
                swap(nums[l], nums[r]);
                l++;
            }
            r++;
        }
    }
};
// @lc code=end

