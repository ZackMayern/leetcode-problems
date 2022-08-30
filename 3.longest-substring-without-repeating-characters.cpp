/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> result(256, -1);
        int maxLength=0, start=-1;

        for(int i=0; i<s.size(); i++){
            if(result[s[i]]>start)
                start = result[s[i]];
            result[s[i]]=i;
            maxLength = max(maxLength, i-start);
        }
        return maxLength;
    }
};
// @lc code=end

