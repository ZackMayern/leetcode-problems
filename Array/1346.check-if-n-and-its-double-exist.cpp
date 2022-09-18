/*
 * @lc app=leetcode id=1346 lang=cpp
 *
 * [1346] Check If N and Its Double Exist
 */

// @lc code=start
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int n = arr.size();

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i!=j && arr[j]==2*arr[i])
                    return true;
            }
        }
        return false;
    }
};
// @lc code=end

