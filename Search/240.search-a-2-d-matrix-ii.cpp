/*
 * @lc app=leetcode id=240 lang=cpp
 *
 * [240] Search a 2D Matrix II
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=0, col=matrix[0].size()-1;
        while(row<matrix.size() && col>=0){
            if(matrix[row][col]<target)
                row++;
            else if(matrix[row][col]>target)
                col--;
            else
                return true;
        }
        return false;
    }
};
// @lc code=end

