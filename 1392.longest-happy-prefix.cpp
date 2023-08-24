/*
 * @lc app=leetcode id=1392 lang=cpp
 *
 * [1392] Longest Happy Prefix
 */

// @lc code=start
class Solution {
public:
    string longestPrefix(string s) {
        // int i=0, j=s.size()-1;
        // string prefix="";
        // int large=INT_MIN;
        // string res="";
        // while(i<s.size()-1) {
        //     prefix += s[i];
        //     int k=j;
        //     string suffix="";
        //     while(k<s.size()) {
        //         suffix+=s[k];
        //     }
        //     if(prefix==suffix){
        //         if(prefix.size()>large){
        //             large = prefix.size();
        //             res=prefix;
        //         }
        //     }
        //     i++;
        //     j--;
        // }   
        // return res;
        int n=s.size();
        vector<int> lps(n,0);
        for(int i=1;i<n;i++){
            int j=lps[i-1];
            while(j>0 && s[i]!=s[j]){
                j=lps[j-1];
            }
            if(s[i]==s[j]) j++;
            lps[i]=j;
        }
        return s.substr(0,lps[n-1]);
    }
};
// @lc code=end

