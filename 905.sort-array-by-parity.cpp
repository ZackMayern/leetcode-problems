/*
 * @lc app=leetcode id=905 lang=cpp
 *
 * [905] Sort Array By Parity
 */

// @lc code=start
class Solution {
public:
    void vectorSwap(vector<int>& a, int lp, int rp){
        int temp;
        temp = a[lp];
        a[lp] = a[rp];
        a[rp] = temp;
    }
    
    vector<int> sortArrayByParity(vector<int>& nums) {
        int leftPointer = 0, rightPointer = nums.size()-1;
        while(leftPointer<rightPointer){
            while(leftPointer<rightPointer && nums[leftPointer]%2==0) 
                leftPointer++;
            while(leftPointer<rightPointer && nums[rightPointer]%2==1)
                rightPointer--;
            vectorSwap(nums, leftPointer, rightPointer);
        }
        return nums;
    }
};
// @lc code=end

