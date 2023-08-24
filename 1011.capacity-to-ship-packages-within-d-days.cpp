/*
 * @lc app=leetcode id=1011 lang=cpp
 *
 * [1011] Capacity To Ship Packages Within D Days
 */

// @lc code=start
class Solution {
public:
    bool predicate(vector<int>& arr,int days,int m){
        int sum=0,day=1;
        for(auto x:arr){
            sum+=x;
            if(sum>m){
                sum=x;
                day++;
                if(day>days){
                    return false;
                }
            }
        }
        return true;
    }
    int sumOfArray(vector<int> a){
        int sum=0;
        for(auto x:a){
            sum+=x;
        }
        return sum;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int s=*max_element(weights.begin(), weights.end());
        int e=sumOfArray(weights);
        while(s<e){
            int m=s+(e-s)/2;
            if(predicate(weights,days,m)){
                e=m;
            }else{
                s=m+1;
            }
        }
        return s;
    }
};
// @lc code=end

