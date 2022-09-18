/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(int i=0; i<numRows; i++){
            vector<int> temp(i+1,1);
            for(int j=1; j<i; j++){
                temp[j]=result[i-1][j]+result[i-1][j-1];
            }
            result.push_back(temp);
        }
        return result;
    }
};
// @lc code=end

