/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currentSum = 0;

        for(auto x:nums){
            if(currentSum<0)
                currentSum = 0;
            currentSum+=x;
            maxSum = max(maxSum, currentSum);
        }
        return maxSum;
    }
};
// @lc code=end

