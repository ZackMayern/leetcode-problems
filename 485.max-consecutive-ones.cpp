/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i, max_value=0, count=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]==1)
                count++;
            else{
                max_value=max(max_value, count);
                count=0;
            }
        }
        
        max_value = max(max_value, count);
        return max_value;
    }
};
// @lc code=end

