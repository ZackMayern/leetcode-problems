/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result(rowIndex+1, 1);
        if(rowIndex<=1)
            return result;
        for(int i=2; i<=rowIndex; i++)
            for(int j=i-1; j>=1; j--)
                result[j]=result[j]+result[j-1];
        
        return result;
    }
};
// @lc code=end

