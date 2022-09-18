/*
 * @lc app=leetcode id=1089 lang=cpp
 *
 * [1089] Duplicate Zeros
 */

// @lc code=start
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> result;
        for(int i=0;i<arr.size();i++){
            result.push_back(arr[i]);
            if(arr[i]==0)
                result.push_back(arr[i]);
        }

        for(int i=0; i<arr.size();i++){
            arr[i]=result[i];
        }
    }
};
// @lc code=end

