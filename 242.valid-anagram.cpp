/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        // vector<int> v1(256,0);
        // vector<int> v2(256,0);
        // if(s.size()!=t.size())
        //     return false;
        // else {
        // for(int i=0; i<s.size(); i++){
        //     v1[s[i]]+=1;
        // }        
        // for(int i=0; i<t.size(); i++){
        //     v2[t[i]]+=1;
        // }     
        // for(int i=97;i<=122;i++){
        //     if(v1[i]!=v2[i])
        //         return false;
        // }
        // return true;
        // }

        //Sorting
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // return s == t;

        //array hashing
        int arr[26]={0};
        for(auto x:s)
            arr[x-'a']++;
        for(auto x:t)
            arr[x-'a']--;
        for(auto x:arr)
            if(x!=0)
                return false;
        return true;
    }
};
// @lc code=end

