/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        if(intervals.size()==0)
            return result;
        
        sort(intervals.begin(), intervals.end());
        vector<int> temp=intervals[0];
        
        for(auto x:intervals){
            if(x[0]<=temp[1])
                temp[1]=max(x[1], temp[1]);
            else{
                result.push_back(temp);
                temp = x;
            }
        }
        result.push_back(temp);
        return result;
    }
};
// @lc code=end

