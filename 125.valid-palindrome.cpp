/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
public:
    // bool checkPallindrome(string str,int start,int end){
    //     if(start>end)
    //         return true;
    //     while (start < end && !iswalnum(str[start])) {
    //         start++;
    //     }
    //     while (start < end && !iswalnum(str[end])) {
    //         end--;
    //     }
    //     if(tolower(str[start])!=tolower(str[end]))
    //         return false;

    //     return checkPallindrome(str,start+1,end-1);
    // }
    // bool isPalindrome(string s) {
    //     return checkPallindrome(s,0,s.size()-1);
    // }

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

