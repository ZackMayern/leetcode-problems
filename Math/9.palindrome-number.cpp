/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(long long x) {
        // if(x<0)
        //     return false;
        // long long n=x, rev=0;
        // while(n){
        //     rev=rev*10+n%10;
        //     n/=10;
        // }
        // return rev==x;
        
        string s1=to_string(x);
        string s2=s1;
        reverse(s2.begin(), s2.end());
        
        return s1==s2;
    }
};
// @lc code=end

