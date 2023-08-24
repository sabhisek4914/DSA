/*
 * @lc app=leetcode id=852 lang=cpp
 *
 * [852] Peak Index in a Mountain Array
 */

// @lc code=start
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e=arr.size()-1;
        while(s<e){
            int mid=s+(e-s)/2;
            if(arr[mid]>arr[mid+1]){
                e=mid;
            }else{
                s=mid+1;
            }
        }
        return s;
        
    }
};
// @lc code=end

