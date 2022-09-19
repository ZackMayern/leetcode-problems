/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result="";
        sort(strs.begin(), strs.end());
        for(int i=0; i<strs[0].size(); i++){
            if(strs[strs.size()-1][i]!=strs[0][i])
                return result;
            result+=strs[0][i];
        }
        return result;
    }
};
// @lc code=end

