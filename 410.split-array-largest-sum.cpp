/*
 * @lc app=leetcode id=410 lang=cpp
 *
 * [410] Split Array Largest Sum
 */

// @lc code=start
class Solution {
public:
    bool predicate(vector<int>& nums, int m, int k){
        int sum=0;
        int cnt=1;
        for(auto x:nums){
            sum+=x;
            if(sum>m){
                cnt++;
                sum=x;
                if(cnt>k){
                    return false;
                }
            }
        }
        return true;
    }
    int sum(vector<int>& nums){
        int sum=0;
        for(auto x:nums){
            sum+=x;
        }
        return sum;
    }
    int splitArray(vector<int>& nums, int k) {
        int s=*max_element(nums.begin(), nums.end());
        int e=sum(nums);
        while(s<e){
            int m= s+(e-s)/2;
            if(predicate(nums,m,k))
                e=m;
            else
                s=m+1;
        }        
        return s;
    }
};
// @lc code=end

