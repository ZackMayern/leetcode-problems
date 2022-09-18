/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        // if(s.length() != t.length())
        //     return false;
        
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());

        // for(int i=0; i<n; i++)
        //     if(s[i]!=t[i])
        //         return false;
        
        // return true;

        // This HashMap approach has less runtime but still works.
        int countS[26] = {0}, countT[26] = {0};
        for(char ch:s)
            countS[ch-'a']++;
        for(char ch:t)
            countT[ch-'a']++;
        for(int i=0; i<26; i++)
            if(countS[i]!=countT[i])
                return false;
        return true;
    }
};
// @lc code=end

