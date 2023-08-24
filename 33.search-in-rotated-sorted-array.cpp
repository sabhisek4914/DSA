/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    bool predicate(vector<int> nums,int target, int m){
        int val;
        if(target<nums[0] == nums[m]<nums[0])
            val = nums[m];
        else{
            if(target<nums[0])
                val=INT_MIN;
            else 
                val=INT_MAX;
        }
        return val>=target;
    }
    int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        while(s<e){
            int m=s+(e-s)/2;
            if(predicate(nums,target,m)){
                e=m;
            }else{
                s=m+1;
            }
        }
        if(nums[s]==target)
            return s;
        return -1;
        // int s=0;
        // int e=nums.size()-1;
        // while(s<=e){
        //     int mid=(s+e)/2;
        //     if(nums[mid]==target) return mid;
        //     if(nums[mid]>=nums[s]){
        //         //l1
        //         if(target>=nums[s]&&target<=nums[mid]){
        //             e=mid-1;
        //         }else{
        //             s=mid+1;
        //         }
        //     }
        //     else{
        //         //l2
        //         if(target<=nums[e]&&target>=nums[mid]){
        //             s=mid+1;
        //         }else{
        //             e=mid-1;
        //         }
        //     }
        // }
        // return -1;
    }
};
// @lc code=end

