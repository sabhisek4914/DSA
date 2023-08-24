/*
 * @lc app=leetcode id=76 lang=cpp
 *
 * [76] Minimum Window Substring
 */

// @lc code=start
class Solution {
public:
    string minWindow(string s, string t) {
        int FS[256]={0};
        int FT[256]={0};

        for (int i=0; i<t.size(); i++){
            FT[t[i]]++;
        }
        
        int minLength=INT_MAX;
        int start_idx=-1;
        int start=0;
        int cnt=0;

        for(int i=0;i<s.size();i++) {
            char ch=s[i];
            FS[ch]++;
            if(FT[ch]>0 and FS[ch]<=FT[ch] ){
                cnt++;
            }
            if(cnt==t.size()){
                while(FT[s[start]]==0 or FT[s[start]] < FS[s[start]]){
                    FS[s[start]]--;
                    start++;
                }

                int length=i-start+1;
                if(length<minLength){
                    minLength=length;
                    start_idx=start;
                }

            }
        }
        if(start_idx!=-1)
            return s.substr(start_idx,minLength);   
        else 
            return "";
    }
};
// @lc code=end

