/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lowPointer=0, midPointer=0, highPointer = nums.size()-1;
        while(midPointer<=highPointer){
            if(nums[midPointer]==0)
                swap(nums[lowPointer++], nums[midPointer++]);
            else if(nums[midPointer]==1)
                midPointer++;
            else
                swap(nums[midPointer], nums[highPointer--]);
        }
    }
};
// @lc code=end

