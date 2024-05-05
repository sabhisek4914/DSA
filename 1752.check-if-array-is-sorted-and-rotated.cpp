/*
 * @lc app=leetcode id=1752 lang=cpp
 *
 * [1752] Check if Array Is Sorted and Rotated
 */

// @lc code=start
class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt=0;
        if(nums[0]<nums[nums.size()-1])
            cnt++;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                cnt++;
                if(cnt>1)
                    break;
            }
        }
        if(cnt<=1)
            return true;
        return false;        
    }
};
// bool check(vector<int>& nums) {
//         int cnt=0;
//         if(nums[0]<nums[nums.size()-1])
//             cnt++;
//         for(int i=0;i<nums.size()-1;i++){
//             if(nums[i]>nums[i+1]){
//                 cnt++;
//                 if(cnt>1)
//                     break;
//             }
//         }
//         if(cnt<=1)
//             return true;
//         return false;        
//     }
// @lc code=end

