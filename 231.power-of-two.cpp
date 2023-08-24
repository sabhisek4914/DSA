/*
 * @lc app=leetcode id=231 lang=cpp
 *
 * [231] Power of Two
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(int n) {
        //check other solutions in discussion
        // Now consider :-
        // bit representation of 7  -> 0111
        // bit representation of 8  -> 1000
        // bitwise AND of 7 and 8 -> 0000
        // we are gonna use this property for for all numbers which are powers of two
        // class Solution {
        // public:
        //     bool isPowerOfTwo(int n) {
        //         if(n<=0) return false;
        //         return ((n&(n-1))==0);
        //     }
        // };
        if(n<=0){return false;}
        if(ceil(log2(n))==floor(log2(n))){
            return true;
        }
        return false;
        
    }
};
// @lc code=end

