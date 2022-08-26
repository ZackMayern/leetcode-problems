/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 1;
        int n = nums.size();
        if(n==0)
            return 0;
        
        for(int r=1;r<n;r++){
            if(nums[r]!=nums[r-1]){
                nums[l]=nums[r];
                l++;
            }
        }
        return l;
    }
};
// @lc code=end

