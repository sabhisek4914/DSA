/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start

//({]]}})
class Solution {
public:
    bool isValid(string s) {
        stack<char> tokens;
        // int st,e=0;
        if(s.size()<=1 || s.size()%2!=0){
            return false;
        }else{
            //int cs,ce,cus,cue,sqs,sqe=0; "())}}"
            for(int i=0; i<s.size(); i++){
                if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                    tokens.push(s[i]);
                    // st++;
                }else{
                    // e++;
                    if(!tokens.empty() && s[i]==')' && tokens.top()=='('){
                        tokens.pop();
                    }else if(!tokens.empty() && s[i]=='}' && tokens.top()=='{'){
                        tokens.pop();
                    }else if(!tokens.empty() && s[i]==']' && tokens.top()=='['){
                        tokens.pop();
                    }else{
                        return false;
                    }
                }                
            }
        }
        if(tokens.size()==0 ){
            return true;
        }
        return false;
    }
};
// @lc code=end

