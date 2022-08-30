/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int maxLength = 1;
        int start = 0, end = 0;
        
        if(s.length()<=1)
            return s;

        //For odd palindrome string
        for(int i=0; i<n-1; i++){
            int l = i, r = i;
            while(l >= 0 && r < n){
                if(s[l]==s[r]){
                    l--;
                    r++;
                }
                else
                    break;
            }
            int len = r-l-1;
            if(len > maxLength){
                maxLength = len;
                start = l+1;
                end = r-1;
            }
        }

        //For even palindrome string
        for(int i=0; i<n-1; i++){
            int l = i, r = i+1;
            while(l >= 0 && r < n){
                if(s[l]==s[r]){
                    l--;
                    r++;
                }
                else
                    break;
            }
            int len = r-l-1;
            if(len > maxLength){
                maxLength = len;
                start = l+1;
                end = r-1;
            }
        }
        return s.substr(start, maxLength);
    }
};
// @lc code=end

