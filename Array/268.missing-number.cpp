/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int totalSum=nums.size()*(nums.size()+1)/2;
        for(auto x:nums)
            sum+=x;
        
        return totalSum-sum;
    }
};
// @lc code=end

