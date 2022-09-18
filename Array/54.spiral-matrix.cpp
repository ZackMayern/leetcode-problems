/*
 * @lc app=leetcode id=54 lang=cpp
 *
 * [54] Spiral Matrix
 */

// @lc code=start
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int leftBoundary = 0, topBoundary = 0;
        int rightBoundary = matrix[0].size(), bottomBoundary = matrix.size();

        while(leftBoundary < rightBoundary && topBoundary < bottomBoundary){
            // Every element at the top
            for(int i=leftBoundary; i<rightBoundary; i++)
                result.push_back(matrix[topBoundary][i]);
            topBoundary++;

            // Every Element at the right column
            for(int i=topBoundary; i<bottomBoundary; i++)
                result.push_back(matrix[i][rightBoundary-1]);
            rightBoundary--;

            if(!(leftBoundary<rightBoundary && topBoundary<bottomBoundary))  // Necessary condition for row and column matrix.
                break;
            
            // Every element at the bottom
            for(int i=rightBoundary-1; i>leftBoundary-1; i--)
                result.push_back(matrix[bottomBoundary-1][i]);
            bottomBoundary--;
            
            // Every element at the left
            for(int i=bottomBoundary-1; i>topBoundary-1; i--)
                result.push_back(matrix[i][leftBoundary]);
            leftBoundary++;
        }
        return result;
    }
};
// @lc code=end

