/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 1);

        int prefix=1, postfix=1;
        for(int i=0; i<nums.size(); i++){
            result[i] = prefix;
            prefix *= nums[i];
        }

        for(int i=nums.size()-1; i>=0; i--){
            result[i] *= postfix;
            postfix *= nums[i];
        }
        return result;
    }
};
// @lc code=end

