/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len=digits.size();
        int k=0;
        if(digits[len-1]!=9){
            digits[len-1]=digits[len-1]+1;
        }else{
            if(len>1){
                for(int i=len-1;i>0;i--){
                    if(digits[i-1]==9){
                        if(i==1){
                            digits[i-1]=1;
                            k=1;
                        }
                        digits[i]=0;
                    }else{
                        digits[i]=0;
                        digits[i-1]=digits[i-1]+1;
                        break;
                    }
                }
            }else{
                digits[0]=1;
                k=1;
            }
        }
        if(k==1){
            digits.push_back(0);
        }
        return digits;        
    }
};
// @lc code=end

