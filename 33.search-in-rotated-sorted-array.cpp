/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int result;
        // Linear Search
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                result = i;
                return result;
            }
         }

        // Using Maps
        // unordered_map<int,int> mp;
        // for(int i=0; i<nums.size(); i++)
        //     mp[nums[i]]=i;

        // for(auto x:mp){
        //     if(x.first==target){
        //         result = x.second;
        //         return result;
        //     }
        // }
        
        return -1;
    }
};
// @lc code=end

