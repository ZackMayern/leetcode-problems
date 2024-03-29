/*
 * @lc app=leetcode id=73 lang=cpp
 *
 * [73] Set Matrix Zeroes
 */

// @lc code=start
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int column0=1, rows = matrix.size(), columns = matrix[0].size();
        for(int i=0; i<rows; i++){
            if(matrix[i][0]==0) 
                column0=0;
            for(int j=1; j<columns; j++)
                if(matrix[i][j]==0)
                    matrix[i][0]=matrix[0][j]=0;
        }
        for(int i=rows-1; i>=0; i--){
            for(int j=columns-1; j>=1; j--)
                if(matrix[i][0]==0 || matrix[0][j]==0)
                    matrix[i][j]=0;
            if(column0==0)
                matrix[i][0]=0;
        }
    }
};
// @lc code=end

