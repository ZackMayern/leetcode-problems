/*
 * @lc app=leetcode id=287 lang=cpp
 *
 * [287] Find the Duplicate Number
 */

// @lc code=start
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> mp(n,0);
        int result;
        for(int i=0; i<n; i++)
            mp[nums[i]]++;
        for(int i=0; i<mp.size(); i++)
            if(mp[i]>1)
                result=i;
        
        return result;
    }
};
// @lc code=end

