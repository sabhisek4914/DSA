/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        // vector<int> leftA(nums.size());
        // vector<int> rightA(nums.size());
        // vector<int> result(nums.size());
        // leftA[0]=1;
        // rightA[nums.size()-1]=1;

        // for(int i=1;i<n;i++){
        //     leftA[i]=nums[i-1]*leftA[i-1];
        // }
        // for(int i=n-2;i>=0;i--){
        //     rightA[i]=nums[i+1]*rightA[i+1];
        // }
        // for(int i=0;i<n;i++){
        //     result[i]=leftA[i]*rightA[i];
        // }
        // return result; 
        
        vector<int> result(nums.size());
        result[0]=1;
        for(int i=1;i<n;i++){
            result[i]=nums[i-1]*result[i-1];
        }
        int r=1;
        for(int i=n-1;i>=0;i--){
            result[i]*=r;
            r*=nums[i];
        }
        return result;
    }
};
// @lc code=end

