/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int maxSize=0;
        int i,j=0;
        int windowSize=0;
        while(j<s.size()) {
            char ch=s[j];
            if(m.count(ch) and m[ch]>=i){
                i=m[ch]+1;
                windowSize=j-i;
            }
            m[ch]=j;
            j++;
            windowSize++;
            maxSize=max(maxSize,windowSize);
        }
        return maxSize;
    }
};
// @lc code=end

