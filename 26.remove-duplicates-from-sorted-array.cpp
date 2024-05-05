/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        for(int i = 0; i < nums.size()-1;i++){
            if(nums[i]!=nums[i+1])
                nums[j++]=nums[i];
        }        
        nums[j++]=nums[nums.size()-1];
        return j;
    }
};
// @lc code=end

