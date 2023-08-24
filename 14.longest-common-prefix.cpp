/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string prefix="";
        string s=strs[0];
        string e=strs[strs.size()-1];
        for(int i=0; i<min(s.size(),e.size()); i++){
            if(s[i]!=e[i])
                return prefix;
            prefix += s[i];
        }
        return prefix;
    }
};
// @lc code=end

