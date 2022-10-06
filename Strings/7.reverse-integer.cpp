/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        int result = 0;
        while (x != 0) {
            int temp = x % 10;
            x /= 10;
            if (result > INT_MAX/10 || (result == INT_MAX / 10 && temp > 7)) return 0;
            if (result < INT_MIN/10 || (result == INT_MIN / 10 && temp < -8)) return 0;
            result = result * 10 + temp;
        }
        return result;
    }
};
// @lc code=end

