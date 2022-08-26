/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i;
        for(i=0; i<nums.size(); i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};
// @lc code=end

