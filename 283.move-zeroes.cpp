/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=0;
        int n = nums.size();
        for(int r=0; r<n; r++){
            if(nums[r]!=0){
                int temp;
                temp=nums[l];
                nums[l]=nums[r];
                nums[r]=temp;
                l++;
            }
        }
    }
};
// @lc code=end

