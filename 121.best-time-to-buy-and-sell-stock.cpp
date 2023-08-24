/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff=0;
        // for (int i=0; i<prices.size()-1; i++){
        //     for(int j=i+1;j<prices.size();j++){
        //         if(prices[j]>prices[i]){
        //             diff=max(prices[j]-prices[i],diff);
        //         }
        //     }   
        // }
        int i=0,j=0;
        int min=INT_MAX;
        while(j<prices.size()){
            if(prices[j]<min){
                min=prices[j];
                i=j;
            }
            diff=max(prices[j]-prices[i],diff);
            j++;
        }
        return diff;
        
    }
};
// @lc code=end

