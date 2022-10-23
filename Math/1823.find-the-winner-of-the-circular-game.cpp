/*
 * @lc app=leetcode id=1823 lang=cpp
 *
 * [1823] Find the Winner of the Circular Game
 */

// @lc code=start
class Solution {
public:
    int helperfunc(int n,int k){
        if(n==1)
            return 0;
        return (helperfunc(n-1,k) + k) % n;
    }

    int findTheWinner(int n, int k) {
        return helperfunc(n,k)+1;
    }
};
// @lc code=end

