/*
 * @lc app=leetcode id=647 lang=cpp
 *
 * [647] Palindromic Substrings
 */

// @lc code=start
class Solution {
public:
    int countSubstrings(string s) {
        int count=0,low,hi;
        for(int i=0; i<s.size();i++){
            //even
            low=i-1;
            hi=i;
            while(low>=0 && hi<s.size() && s[low]==s[hi]){
                count++;
                low--;
                hi++;
            }
            // odd
            low=i-1;
            hi=i+1;
            while(low>=0 && hi<s.size() && s[low]==s[hi]){
                count++;
                low--;
                hi++;
            }
        }
        count+=s.size();
        return count;
    }
};
// @lc code=end

