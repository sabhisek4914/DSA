/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int large=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>large) 
            {
                large=sum;
            }
            if(sum<0){
                sum=0;
            }
        }        
        return large;
    }
};
// @lc code=end

