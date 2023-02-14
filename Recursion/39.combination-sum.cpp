/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution {
public:
    void findComb(int index, int target, vector<int>candidates, vector<vector<int>> &result, vector<int> &temp) {
        if(index==candidates.size()) {
            if(target==0) {
                result.push_back(temp);
            }
            return;
        }

        if(candidates[index]<=target) {
            temp.push_back(candidates[index]);
            findComb(index, target-candidates[index], candidates, result, temp);
            temp.pop_back();
        }
        findComb(index+1, target, candidates, result, temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> temp;
        findComb(0, target, candidates, result, temp);
        return result;
    }
};
// @lc code=end

