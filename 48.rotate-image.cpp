/*
 * @lc app=leetcode id=48 lang=cpp
 *
 * [48] Rotate Image
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int leftBoundary = 0;
        int rightBoundary = matrix.size()-1;

        while(leftBoundary<rightBoundary){
            for(int i=0; i<(rightBoundary-leftBoundary); i++){
                int topBoundary = leftBoundary;
                int bottomBoundary = rightBoundary;

                //saving top left variable
                int topLeft = matrix[topBoundary][leftBoundary+i];

                //moving bottom left variable to top left i.e. 7->1
                matrix[topBoundary][leftBoundary+i]=matrix[bottomBoundary-i][leftBoundary];

                //moving bottom right variable to bottom left i.e. 9->7
                matrix[bottomBoundary-i][leftBoundary]=matrix[bottomBoundary][rightBoundary-i];

                //moving top right variable to bottom right i.e. 3->9
                matrix[bottomBoundary][rightBoundary-i]=matrix[topBoundary+i][rightBoundary];

                //moving saved top left variable to top right i.e. 7->1
                matrix[topBoundary+i][rightBoundary]=topLeft;
            }
            rightBoundary--;
            leftBoundary++;
        }
    }
};
// @lc code=end

