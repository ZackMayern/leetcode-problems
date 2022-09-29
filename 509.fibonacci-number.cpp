/*
 * @lc app=leetcode id=509 lang=cpp
 *
 * [509] Fibonacci Number
 */

// @lc code=start
class Solution {
public:
    int fib(int n) {
        if(n<=1)
            return n;

        int last=fib(n-1);
        int secondlast=fib(n-2);

        return last+secondlast;
    }
};
// @lc code=end

