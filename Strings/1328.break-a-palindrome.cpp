/*
 * @lc app=leetcode id=1328 lang=cpp
 *
 * [1328] Break a Palindrome
 */

// @lc code=start
class Solution {
public:
    string breakPalindrome(string palindrome) {
        if(palindrome.length()<=1)
            return "";
        
        for(int i=0; i<palindrome.length()/2; i++){
            if(palindrome[i]!='a'){
                palindrome[i]='a';
                return palindrome;
            }
        }

        palindrome[palindrome.length()-1]='b';
        return palindrome;
    }
};
// @lc code=end

