/*
 * @lc app=leetcode id=62 lang=cpp
 *
 * [62] Unique Paths
 */

// @lc code=start
class Solution {
public:
    int uniquePaths(int m, int n) {
        int N=m+n-2;
        int r=m-1;
        double result=1;
        
        for(int i=1; i<=r; i++)
            result = result*(N-r+i)/i;
        return result;
    }
};
// @lc code=end

