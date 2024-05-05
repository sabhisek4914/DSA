/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        // for(int i = 0; i < nums.size();i++){
        for(auto x:nums){
            ans^=x;
        }
        return ans;
        // unordered_map<int,int> mp;
        // for(auto x:nums){
        //     mp[x]++;
        // }        
        // int ans;
        // for(auto m:mp){
        //     if(m.second==1){
        //         ans= m.first;
        //         break; 
        //     }
        // }
        // return ans;
    }
};
// @lc code=end

