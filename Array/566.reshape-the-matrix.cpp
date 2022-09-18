/*
 * @lc app=leetcode id=566 lang=cpp
 *
 * [566] Reshape the Matrix
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();    // Row
        int n = mat[0].size(); // Column
        
        if(r*c!=m*n)           // Illegal Case
            return mat;

        vector<int> temp;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                temp.push_back(mat[i][j]);
            }
        }

        int tempIndex = 0;
        vector<vector<int>> shapedMatrix(r, vector<int>(c,0));
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                shapedMatrix[i][j] = temp[tempIndex];
                tempIndex++;
            }
        }

        // For low memory usage
        // vector<vector<int>> shapedMatrix(r, vector<int>(c,0));
        // for(int i=0; i<m*n; i++){
        //     shapedMatrix[i/c][i%c]=mat[i/n][i%n];
        // }
        return shapedMatrix;
    }
};
// @lc code=end

