/*
 * @lc app=leetcode id=162 lang=cpp
 *
 * [162] Find Peak Element
 */

// @lc code=start
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        //     for(int i=0;i<(nums.size()-1);i++){
        //         if(nums[i]>nums[i+1]){
        //             return i;
        //         }
        //     }
        // return nums.size()-1;
        int s=0,e=nums.size()-1;
        while(s<e){
            int m=s+(e-s)/2;
            if(nums[m]>nums[m+1]){
                e=m;
            }else{
                s=m+1;
            }
        }
        return s;
    }
};
// @lc code=end

// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         int n = nums.size();
//         int low = 0;
//         int high = nums.size()-1;
//         while(low < high){
//             int mid = (low + high) >> 1;
//             if(nums[mid] > nums[mid+1]){
//                 high = mid;
//             }
//             else{
//                 low = mid + 1;
//             }
//         }
//         return low;
//     }
// };

// class Solution {
// private: 
//     int recursive_binary_search(vector<int>& nums, int low, int high){
//         if(low == high){
//             return low;
//         }
//         int mid = (low + high) >> 1;
//         if(nums[mid] > nums[mid+1]){
//             return recursive_binary_search(nums, low, mid);
//         }
//         else{
//             return recursive_binary_search(nums, mid+1, high);
//         }
//     }
// public:
//     int findPeakElement(vector<int>& nums) {
//         return recursive_binary_search(nums, 0, nums.size()-1);
//     }
// };