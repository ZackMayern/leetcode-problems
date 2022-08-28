/*
 * @lc app=leetcode id=414 lang=cpp
 *
 * [414] Third Maximum Number
 */

// @lc code=start
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> distMax;
        for(auto x:nums)
            distMax.insert(x);

        int n = distMax.size();
        vector<int> v(distMax.begin(), distMax.end());

        if(n<3)
            return v[n-1];
        return v[n-3];

    }
};
// @lc code=end

