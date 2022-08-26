/*
 * @lc app=leetcode id=383 lang=cpp
 *
 * [383] Ransom Note
 */

// @lc code=start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());
        
        int j=0;
        for(auto i : magazine)
            if(i == ransomNote[j] && j < ransomNote.length()) 
                j++;
        
        return(j>=ransomNote.length());
    }
};
// @lc code=end

