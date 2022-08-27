/*
 * @lc app=leetcode id=1299 lang=cpp
 *
 * [1299] Replace Elements with Greatest Element on Right Side
 */

// @lc code=start
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int maxNum = -1, newMax;

        for(int i=n-1; i>=0; i--){    //Traversing the array from rear end
            newMax = max(maxNum, arr[i]);
            arr[i] = maxNum;
            maxNum = newMax;
        }

        return arr;
    }
};
// @lc code=end

