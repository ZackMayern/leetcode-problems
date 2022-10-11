/*
 * @lc app=leetcode id=59 lang=cpp
 *
 * [59] Spiral Matrix II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int row=0;
        int rowBoundary=n-1;
        int col=0;
        int colBoundary=n-1;
        int val=1;

        vector<vector<int>> result(n, vector<int> (n));
        while(row <= rowBoundary && col <= colBoundary)
        {
            for(int i = col; i <= colBoundary; i++)
                result[row][i] = val++;

            for(int i = row+1; i <= rowBoundary; i++)
                result[i][colBoundary] = val++;
            
            for(int i = colBoundary-1; i>col; i--)
                result[rowBoundary][i] = val++;

            for(int i = rowBoundary; i>row; i--) 
                result[i][col] = val++;
            
            row++;
            rowBoundary--;
            col++;
            colBoundary--;
        }
        return result; 
    }
};
// @lc code=end

