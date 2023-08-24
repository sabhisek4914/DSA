/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
                string r;
        int j=0;
        for (int i = 0; i <s.size(); i++) {
            if(iswalnum(s[i])) {
                r+= tolower(s[i]);
                j++;
            }
        }        
        string p=r;
        reverse(p.begin(), p.end());
        if(p==r) 
            return true;
        else 
            return false;

    }
};
// @lc code=end

