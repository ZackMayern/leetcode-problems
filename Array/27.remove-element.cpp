/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
    
        for(auto x:nums){
            if(x!=val){
                nums[i] = x;
                i++;
            }
        }
        return i;
    }
};
// @lc code=end

