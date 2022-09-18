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
            if(mid<end && nums[mid]>nums[mid+1]) // Finding the largest element in the array and return the pivot position 
                return mid;
            if(mid>start && nums[mid]<nums[mid-1]) 
                return mid-1;
            else if(nums[mid]<nums[start]) // if neither, if the mid value is less than start, end is shifted to the previous of mid position.
                end = mid-1;
            else  // if neither, if the mid value is greater than start, start is shifted to the next of mid position.
                start = mid+1;
        }
        return -1;   // Return -1 if pivot couldn't be found.
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size()-1;
        int pivot = findPivot(nums);  // Finding the pivot using binary search

        if(pivot==-1)
            return binarySearch(nums, target, 0, n);  // If pivot couldn't be found the array is probably too short.
        if(nums[pivot]==target)   // If by chance pivot element is same as the target, then return pivot.
            return pivot;
        if(target>=nums[0])  // If target is larger than the first index of the rotated array, probably it lies between the starting and the pivot position.
            return binarySearch(nums, target, 0, pivot-1);

        return binarySearch(nums, target, pivot+1, n);  // If target is lesser than the first index of the rotated array, probably it lies between the next to pivot and the last elements.
    }
};
// @lc code=end

