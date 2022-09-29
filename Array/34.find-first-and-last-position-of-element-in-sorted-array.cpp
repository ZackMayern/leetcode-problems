/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
class Solution {
public:
    int binarySearch(vector<int> nums, int target, bool leftBias){
        int start=0, end=nums.size()-1;
        int index=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]>target)
                end=mid-1;
            else if(nums[mid]<target)
                start=mid+1;
            else{
                index=mid;
                if(leftBias)
                    end=mid-1;
                else
                    start=mid+1;
            }
        }
        return index;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int leftIndex=binarySearch(nums, target, true);
        int rightIndex=binarySearch(nums, target, false);
        return {leftIndex, rightIndex};
    }
};
// @lc code=end

