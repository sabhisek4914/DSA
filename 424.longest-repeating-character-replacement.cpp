/*
 * @lc app=leetcode id=424 lang=cpp
 *
 * [424] Longest Repeating Character Replacement
 */

// @lc code=start
class Solution {
public:
    int characterReplacement(string s, int k) {
       int i=0,j=0;
       int maxFreq=0;
       int res=0;
       int freqArr[256]={0};
    //    map<int, int> freqArr;
       for(j=0;j<s.size();j++){
            //in a window
            freqArr[s[j]]++;
            maxFreq=max(maxFreq,freqArr[s[j]]);
            
            while(j-i+1-maxFreq>k){
                //start on a new window
                freqArr[s[i]]--;
                i++;
            }

            res=max(res,j-i+1);
       }
       return res;
    }
};
// @lc code=end

