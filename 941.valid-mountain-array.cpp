/*
 * @lc app=leetcode id=941 lang=cpp
 *
 * [941] Valid Mountain Array
 */

// @lc code=start
class Solution {
public:
    int largestElement(vector<int>& arr, int n){    //This functions finds the largest element in the array and then returns the index of the largest element.
        
        int max = arr[0], maxIndex=0;

        for(int i=0; i<n; i++){
            if(arr[i]>max){
                max=arr[i];
                maxIndex = i;
            }
        }
        return maxIndex;
    }

    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if(n<3)
            return false;
        
        int l = largestElement(arr, n); // l is assigned as the index of the largest/peak of the array

        bool validMountain = true;
        bool leftValid = false;
        bool rightValid = false;

        for(int i=l; i>0; i--){  //checking whether the elements on the left side of the peak are decreasing
            if(arr[i]<=arr[i-1])
                validMountain = false;  //return false if leading element is lesser than or equal to the previous element.
            else
                leftValid = true;  // else make leftValid true indicating the left side of the mountain is in increasing order.
        }

        for(int i=l; i<n-1; i++){  //checking whether the elements on the right side are also decreasing 
            if(arr[i]<=arr[i+1])
                validMountain = false;  //return false if leading element is greater than or equal to the previous element.
            else
                rightValid = true;  // else make rightValid true indicating the right side of the mountain is in decreasing order.
        }
        
        if(validMountain && leftValid && rightValid)  //check whether all the 3 booleans are true.
            return true;
        else
            return false;
    }
};
// @lc code=end

