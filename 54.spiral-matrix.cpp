/*
 * @lc app=leetcode id=54 lang=cpp
 *
 * [54] Spiral Matrix
 */

// @lc code=start
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> result(m*n);

        int l=0, t=0, r=n-1, b=m-1;
        int k=0;
        while(k<m*n) {
            if(k<m*n){
                for(int i=l;i<=r;i++){
                    result[k]=matrix[t][i];
                    k++;
                }
                t++;
            }
            if(k<m*n){
                for(int i=t;i<=b;i++){
                    result[k]=matrix[i][r];
                    k++;
                }
                r--;                
            }
            if(k<m*n){
                for(int i=r;i>=l;i--){
                    result[k]=matrix[b][i];
                    k++;
                }
                b--;                
            }
            if(k<m*n){
                for(int i=b;i>=t;i--){
                    result[k]=matrix[i][l];
                    k++;
                }
                l++;
            }
        }
        return result;
    }
};
// @lc code=end

