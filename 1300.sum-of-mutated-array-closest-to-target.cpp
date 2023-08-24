/*
 * @lc app=leetcode id=1300 lang=cpp
 *
 * [1300] Sum of Mutated Array Closest to Target
 */

// @lc code=start
class Solution {
public:
    int m_process(int m,int target, vector<int>& arr){
        int sum=0;
        for(auto x:arr){
            sum+=min(m,x);
        }
        return abs(target-sum);
    }
    bool predicate(int m,int target, vector<int>& arr){
        return m_process(m,target,arr)<=m_process(m+1,target,arr);
    }
    int findBestValue(vector<int>& arr, int target) {
        int s=0;
        int e=*max_element(arr.begin(), arr.end());
        while(s<e){
            int m=s+(e-s)/2;
            if(predicate(m,target,arr)){
                e=m;
            }else{
                s=m+1;
            }
        }
        return s;        
    }
};
// @lc code=end

