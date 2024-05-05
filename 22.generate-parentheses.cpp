/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */

// @lc code=start
class Solution {
public:
    // void combinations(vector<string> &ans,string str,int n,int open,int close, int i){
    //     if(i==2*n){
    //         ans.push_back(str);
    //         return;
    //     }
    //     //open
    //     if(open<n){
    //         combinations(ans,str+"(",n,open+1,close,i+1);
    //     }
    //     //close
    //     if(close<open){
    //         combinations(ans,str+")",n,open,close+1,i+1);
    //     }
    // }

    // vector<string> generateParenthesis(int n) {
    //     vector<string> ans;
    //     string s="";
    //     combinations(ans,s,n,0,0,0);
    //     return ans;
    // }

    void combinations(vector<string> &ans,string str,int s,int e){
        if(s==0 && e==0){
            ans.push_back(str);
            return;
        }
        if(s>0){
            combinations(ans,str+'(',s-1,e);
        }
        if(e>0 && e>s){
            combinations(ans,str+')',s,e-1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s="";
        combinations(ans,s,n,n);
        return ans;
    }
};
// @lc code=end

