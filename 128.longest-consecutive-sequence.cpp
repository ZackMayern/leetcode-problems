/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hashSet;
        for(int x:nums)
            hashSet.insert(x);

        int longestConsecutive=0;

        for(int x:nums){
            if(!hashSet.count(x-1)){
                int currentNum=x;
                int currentLongest=1;

                while(hashSet.count(currentNum+1)){
                    currentNum+=1;
                    currentLongest+=1;
                }
                longestConsecutive=max(longestConsecutive, currentLongest);
            }
        }
        return longestConsecutive;
    }
};
// @lc code=end

