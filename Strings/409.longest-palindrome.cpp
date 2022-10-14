/*
 * @lc app=leetcode id=409 lang=cpp
 *
 * [409] Longest Palindrome
 */

// @lc code=start
class Solution {
public:
    int longestPalindrome(string s) {
        int result = 0;
        unordered_map<char, int> mp;
        for(auto x:s)
            mp[x]++;
        
        bool flag=false;
        for(auto x:mp){
            result+=x.second-x.second%2;
            if(x.second%2)
                flag=true;
        }
        if(flag)
            result++;
        return result;
    }
};
// @lc code=end

