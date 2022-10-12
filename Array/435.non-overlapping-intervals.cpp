/*
 * @lc app=leetcode id=435 lang=cpp
 *
 * [435] Non-overlapping Intervals
 */

// @lc code=start
bool comp(vector<int>&a, vector<int>& b){
    return a[1]<b[1];
}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.size()<=1)
            return 0;

        sort(intervals.begin(), intervals.end(), comp);
        int count=0;
        int end=intervals[0][1];

        for(int i=1; i<intervals.size(); i++){
            if(intervals[i][0]<end)
                count++;
            else
                end=intervals[i][1];
        }
        return count;
    }
};
// @lc code=end

