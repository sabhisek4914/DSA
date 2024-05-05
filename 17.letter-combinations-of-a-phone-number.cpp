/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
class Solution {
public:
    vector<string> phone={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void phoneCombination(vector<string>& output, string digits, string c_comb,int i){
        if(digits[i]=='\0'){
                output.push_back(c_comb);
            return;
        }
        int current_key=digits[i]-'0';
        // cout<<current_key<<" : "<<c_comb<<" : "<<phone[current_key].size()<<endl;
        if(current_key==0||current_key==1){
            phoneCombination(output,digits,c_comb,i+1);
        }
        for(int j=0;j<phone[current_key].size();j++){
            phoneCombination(output,digits,c_comb+phone[current_key][j],i+1);
        }
        return;
    }
    vector<string> letterCombinations(string digits) {
        vector<string> output;
        string c_comb;
        if(digits.size()>0)
            phoneCombination(output, digits,c_comb,0);
        return output;
    }
};
// @lc code=end

