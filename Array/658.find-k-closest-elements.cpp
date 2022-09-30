/*
 * @lc app=leetcode id=658 lang=cpp
 *
 * [658] Find K Closest Elements
 */

// @lc code=start
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> result;
        int left=0, right=arr.size()-k;
        while(left<right){
            int mid=(left+right)/2;
            if(x-arr[mid]>arr[mid+k]-x)
                left=mid+1;
            else
                right=mid;
        }
        
        for(int i=left; i<left+k; i++)
            result.push_back(arr[i]);
        
        return result;
    }
};
// @lc code=end

