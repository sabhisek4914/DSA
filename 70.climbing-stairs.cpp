/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }

        vector<int> dp(n+1);
        dp[0] = dp[1] = 1;
        
        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
    // int climbStairs(int n, unordered_map<int, int>& memo) {
    //     if (n == 0 || n == 1) {
    //         return 1;
    //     }
    //     if (memo.find(n) == memo.end()) { //doesnot exist then add
    //         memo[n] = climbStairs(n-1, memo) + climbStairs(n-2, memo);
    //     }
    //     return memo[n];
    // }

    // int climbStairs(int n) {
    //     unordered_map<int, int> memo;
    //     return climbStairs(n, memo);
    // }


    // int stairs(int n, int cnt){
    //     if(n==0){
    //         return 1;
    //     }
    //     if(n<0){
    //         return 0;
    //     }
    //     return stairs(n-1, cnt)+stairs(n-2, cnt);
    // }
    // int climbStairs(int n) {
    //     int cnt=0;
    //     return stairs(n,cnt);
    // }
};
// @lc code=end

