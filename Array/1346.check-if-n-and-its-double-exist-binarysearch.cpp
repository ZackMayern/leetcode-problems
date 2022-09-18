/*
 * @lc app=leetcode id=1346 lang=cpp
 *
 * [1346] Check If N and Its Double Exist
 */

// @lc code=start
class Solution {
public:
    bool binarySearch(int s, int e, int target, vector<int>& arr){
        if(e>=s){
            int mid = (s+e)/2;
            if(arr[mid]==target)
                return true;
            else if(arr[mid]>target)
                return binarySearch(0, mid-1, target, arr);
            else
                return binarySearch(mid+1, e, target, arr);
        }
        return false;
    }
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());   //Sorting the array vector for easy searching and comparing
        int n = arr.size();

        for(int i=0; i<n; i++){
            if(arr[i]%2==0){      //checks if the element in the array is divisible by 2
                if(arr[i]>=0 && binarySearch(0, i-1, arr[i]/2, arr))  // If the element is a positive integer then its half can lie before its position. Binary search is used to find the half.
                    return true;
                else if (arr[i]<0 && binarySearch(i+1, n-1, arr[i]/2, arr)) // If the element is a negative integer then its half can lie after its position till the end of the array. Binary search is used to find the half.
                    return true;
            }
        }
        return false; // Return false if no double is found.
    }
};
// @lc code=end

