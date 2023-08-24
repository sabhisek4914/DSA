/*
 * @lc app=leetcode id=81 lang=cpp
 *
 * [81] Search in Rotated Sorted Array II
 */

// @lc code=start
class Solution {
public:
    bool predicate(vector<int>& nums, int m, int target){
        int val;
        if(target<nums[0] == nums[m]<nums[0]){
            val=nums[m];
        }else{
            // if(target >= nums[0])
            //     val=INT_MAX;
            // else
            //     val=INT_MIN;
            if(target < nums[0])
                val=INT_MIN;
            else
                val=INT_MAX;
        }
        return val>=target;
    }
    bool search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        while(s<e) {
            while(s<e && nums[s]==nums[s+1])
                s++;
            while(s<e && nums[e]==nums[e-1])
                e--;
            int m=s+(e-s)/2;
            if(predicate(nums,m,target)){
                e=m;
            }else{
                if(s<nums.size()-1)
                    s=m+1;
            }
        }
        return nums[s]==target?true:false;
    }
};
// @lc code=end

