/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        while(left<right){
            int mid= left + (right-left)/2;
            // int mid=(left+right)/2;
            if(nums[mid]<= nums[right]){
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
        return nums[left];

        // int s=0;
        // int e=nums.size()-1;
        // //smallest element in 0th index
        // if(nums[s]<=nums[e])
        // {
        //     return nums[s];
        // }
        // while(s<=e){
        //     int mid= (s+e)/2;
        //     if(nums[mid]<nums[mid-1]){
        //         return nums[mid];
        //     }
        //     if(nums[mid]<nums[e]){
        //         e=mid-1;
        //     }else{
        //         s=mid+1;
        //     }
        // }
        // return -1;
    }
};
// @lc code=end

