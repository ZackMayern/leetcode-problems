/*
 * @lc app=leetcode id=350 lang=cpp
 *
 * [350] Intersection of Two Arrays II
 */

// @lc code=start
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_map<int, int> mp;

        for(auto x:nums1)
            mp[x]++;

        for(int i=0; i<nums2.size(); i++){
            // auto iter = mp.find(nums2[i]);
            // if(iter != mp.end() && iter->second > 0){
            //     result.push_back(nums2[i]);
            //     iter->second--;
            // }
            if(mp[nums2[i]]){
                result.push_back(nums2[i]);
                mp[nums2[i]]--;
            }
        }
        return result;
    }
};
// @lc code=end

