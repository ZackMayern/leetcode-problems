/*
 * @lc app=leetcode id=290 lang=cpp
 *
 * [290] Word Pattern
 */

// @lc code=start
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, int> charmap;
        map<string, int> stringmap;
        stringstream ss(s);
        string word;

        int i = 0, n = pattern.size();
        while(ss >> word) {
            if (i == n || charmap[pattern[i]] != stringmap[word])
                return false;
            charmap[pattern[i]] = stringmap[word] = i + 1;
            i++;
        }
        return i==n;
    }
};
// @lc code=end

