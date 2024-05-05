/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
    double power(double x, long n){
        if(n==0) return 1.0;
        if(n==1) return x;
        if(n<0) return power(1/x,-n);
        double result=power(x*x,n/2);
        if(n%2) result*=x;
        return result;
    }
    double myPow(double x, int n) {
        // double op;
        // recursionPow(op,x,n,0,1.00);
        // return op;
        // return pow(x,n);      
        return power(x,n);
    }
};
// @lc code=end

