/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution {
public:
    // Storing elements in an array and performing binary search on the vector.
    // bool binarySearch(vector<int> ele, int tar){
    //     int start = 0, end = ele.size()-1;
    //     while(start<=end){
    //         int mid = (start+end)/2;
    //         if(ele[mid]==tar)
    //             return true;
    //         else{
    //             if(ele[mid]>tar)
    //                 end = mid-1;
    //             else
    //                 start = mid+1;
    //         }
    //     }
    //     return false;
    // }

    // bool searchMatrix(vector<vector<int>>& matrix, int target) {
    //     vector<int> elements;
    //     bool flag = false;
        
    //     for(int i=0; i<matrix.size(); i++){
    //         for(int j=0; j<matrix[0].size(); j++){
    //             elements.push_back(matrix[i][j]);
    //             flag = binarySearch(elements, target);
    //             if(flag)
    //                 return true;
    //         }  
    //     }
    //     return flag;
    // }

    // Using Binary search in the matrix itself.
    // bool searchMatrix(vector<vector<int>>& matrix, int target) {
    //     vector<int> elements;
    //     bool flag = false;
        
    //     for(int i=0; i<matrix.size(); i++){
    //         // Traversing the row and implementing Binary Search in columns.
    //         int start = 0, end = matrix[0].size()-1;
    //         while(start<=end){
    //             int mid = (start+end)/2;
    //             if(matrix[i][mid]==target)
    //                 return true;
    //             else{
    //                 if(matrix[i][mid]>target)
    //                     end = mid-1;
    //                 else
    //                     start = mid+1;
    //             }
    //         }
    //     }
    //     return flag;
    // }

    // Binary Search approach but using a formula.
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int start = 0, end = (m*n)-1;

        while(start<=end){
            int mid = (start+end)/2;
            if(matrix[mid/n][mid%n]==target)
                return true;
            else if(matrix[mid/n][mid%n]>target)
                end = mid-1;
            else
                start = mid+1;
        }
        return false;
    }
};
// @lc code=end

