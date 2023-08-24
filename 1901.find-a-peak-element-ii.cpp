/*
 * @lc app=leetcode id=1901 lang=cpp
 *
 * [1901] Find a Peak Element II
 */

// @lc code=start
class Solution {
public:
    int findMax(vector<vector<int>>& mat,int col){
        int maxRow=0;
        for(int i=0;i<mat.size();i++){
            maxRow=mat[i][col]>=mat[maxRow][col]?i:maxRow;
        }
        return maxRow;
    }
    bool predicate(vector<vector<int>>& mat,int rightCol, int midCol){
        int maxRow=findMax(mat,midCol);
        bool p= midCol+1 <= rightCol && mat[maxRow][midCol]>mat[maxRow][midCol+1];
        return p;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int leftCol=0;
        int rightCol=mat[0].size()-1;
        while(leftCol < rightCol){
            int midCol=leftCol+(rightCol-leftCol)/2;
            if(predicate(mat,rightCol,midCol))
                rightCol=midCol;
            else
                leftCol=midCol+1;
        }        
        int maxRow=findMax(mat,leftCol);
        return vector<int>{maxRow,leftCol};
    }
};
// @lc code=end

