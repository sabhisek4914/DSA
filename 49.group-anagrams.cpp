/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> mp;

        for(auto x:strs){
            string s=x;
            sort(s.begin(), s.end());
            mp[s].push_back(x);
        }        
        for(auto x:mp){
            result.push_back(x.second);
        }
        return result;
    }
};
// @lc code=end

