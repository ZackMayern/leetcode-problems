/*
 * @lc app=leetcode id=1329 lang=cpp
 *
 * [1329] Sort the Matrix Diagonally
 */

// @lc code=start
class Solution {
public:
    void sortVector(vector<vector<int>>& mat, int r, int c){
        int m=mat.size();  //row count
        int n=mat[0].size();  //column count
        int i=r; //row counter
        int j=c; //column counter
        vector<int> values(101); //vector that will be used to fill index of the elements that are come across in the matrix

        while(i<m && j<n){
            values[mat[i][j]]++;  //the index of the vector value is incremented. The index is the element of the matrix.
            i++; //increment row counter and column counter to traverse the matrix.
            j++;
        }

        i=r, j=c;  //resetting values again.

        for(int k=1; k<values.size(); k++){
            while(values[k]>0){ //now to put the elements in a sorted way
                mat[i][j]=k;    //matrix indices were reset in the previous step. The index of the value vector is assigned to the matrix position
                values[k]--;    //decrements the counter at k position in the values vector.

                i++; //increment row counter and column counter to traverse the matrix.
                j++;
            }
        }
    }
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m=mat.size();  //row
        int n=mat[0].size();  //column

        //Diagonal elements from row=0
        for(int col=0; col<n; col++){
            sortVector(mat, 0, col);
        }

        //Diagonal elements from column=0
        for(int row=1; row<m; row++){
            sortVector(mat, row, 0);
        }

        return mat;
    }
};
// @lc code=end

