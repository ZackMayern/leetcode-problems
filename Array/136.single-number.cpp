/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // TC - O(N), SC - O(N)
        // unordered_map<int, int> mp;
        // for(auto x:nums)
        //     mp[x]++;
        
        // for(auto y:mp)
        //     if(y.second==1)
        //         return y.first;
        
        // return -1;

        // TC - O(NlogN), SC - O(1)
        // sort(nums.begin(), nums.end());
        // for(int i=0; i<nums.size()-1; i+=2)
        //     if(nums[i]!=nums[i+1])
        //         return nums[i];
        
        // return nums[nums.size()-1];

        // TC - O(N), SC - O(1)
        int result=0;
        for(auto x:nums)
            result^=x;
        
        return result;
    }
};
// @lc code=end

