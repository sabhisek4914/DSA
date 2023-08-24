/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size()<3)
            return {};
        if(nums[0]>0) return {};
        vector<vector<int>> result;
        for(int i=0; i<=nums.size()-3; i++){
            if(nums[i]>0) break;
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum>0)
                    k--;
                else if(sum<0)
                    j++;
                else{
                        result.push_back({nums[i],nums[j],nums[k]});
                        int last_low=nums[j],last_high=nums[k];
                        while(j<k && last_low==nums[j])
                            j++;
                        while(j<k && last_low==nums[k])
                            k--;
                }
            }
        }        
        return result;
    }
};
// @lc code=end

