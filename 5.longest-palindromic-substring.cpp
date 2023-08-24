/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution {
public:
    // bool check(string s){
    //     int i=0,j=s.size()-1;
    //     while(i<j){
    //         if(s[i]!=s[j])
    //             return false;
    //         i++;j--;
    //     }
    //     return true;
    // }
    string longestPalindrome(string s) {
        // vector<string> subString;
        // int maxSize=0;
        // string result;
        // for(int i = 0; i < s.length();i++){
        //     string str="";
        //     for(int j = i; j <s.size(); j++){
        //         str+=s[j];
        //         subString.push_back(str);
        //     }
        // }
        // for(int i = 0; i < subString.size();i++){
        //     if(check(subString[i])){
        //         if (maxSize<subString[i].size()){
        //             maxSize=subString[i].size();
        //             result=subString[i];
        //         }
        //     }
        // }        
        // return result;

         int n = s.length();
    int start = 0, end = 1;
    int low, hi;
 
    // Traverse the input string
    for (int i = 0; i < n; i++) {
 
        // Find longest palindromic substring of even size
        low = i - 1;
        hi = i;
 
        // Expand substring while it is palindrome
        // and in bounds
        while (low >= 0 && hi < n && s[low] == s[hi]) {
 
            // Update maximum length and starting index
            if (hi - low + 1 > end) {
                start = low;
                end = hi - low + 1;
            }
            low--;
            hi++;
        }
 
        // Find longest palindromic substring of odd size
        low = i - 1;
        hi = i + 1;
 
        // Expand substring while it is palindrome
        // and in bounds
        while (low >= 0 && hi < n && s[low] == s[hi]) {
 
            // Update maximum length and starting index
            if (hi - low + 1 > end) {
                start = low;
                end = hi - low + 1; 
            }
            low--;
            hi++;
        }
    }
    
    return s.substr(start,end );
    }
};
// @lc code=end

