/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution {
public:
void rotate(vector<int>& nums, int k) {
        int n = size(nums);
        if(k==nums.size())  return;
        k=k%nums.size();
        int j=0;
        int x=nums.size()-k;
        while(j<x){
            nums.push_back(nums[j]);
            j++;
        }

        nums.erase(nums.begin(),nums.begin()+x);
    }
    // void rotate(vector<int>& nums, int k) {
    //     k=k%nums.size();
    //     reverse(nums.begin(),nums.begin()+(nums.size()-k));
    //     reverse(nums.begin()+(nums.size()-k),nums.end());    
    //     reverse(nums.begin(),nums.end());
        
    //     // vector<int> arr;
    //     // int r=k%nums.size();
    //     // int m=nums.size()-r;
    //     // for(int i=m; i<nums.size(); i++) {
    //     //     arr.push_back(nums[i]);
    //     // }
    //     // for(int i=0; i<nums.size()-r; i++){
    //     //     arr.push_back(nums[i]);
    //     // }
    //     // for(int i=0; i<nums.size();i++) {
    //     //     nums[i]=arr[i];
    //     // }
    // }
};
// @lc code=end

