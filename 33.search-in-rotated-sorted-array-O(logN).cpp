/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int binarySearch(vector<int>& nums, int target, int start, int end){
        while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                start = mid + 1;
            else
                end = mid - 1; 
        }
        return -1;
    }

    int findPivot(vector<int> nums){
        int start = 0, end = nums.size()-1;
        
        while(start<=end){
            int mid = (start+end)/2;
            if(mid < end && nums[mid]>nums[mid+1])
                return mid;
            if(mid > start && nums[mid]<nums[mid-1])
                return mid-1;
            else if(nums[mid] < nums[start])
                end = mid-1;
            else
                start = mid+1;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size()-1;
        int pivot = findPivot(nums);

        if(pivot==-1)
            return binarySearch(nums, target, 0, n);
        if(nums[pivot]==target)
            return pivot;
        if(target>=nums[0])
            return binarySearch(nums, target, 0, pivot-1);

        return binarySearch(nums, target, pivot+1, n);
    }
};
// @lc code=end

