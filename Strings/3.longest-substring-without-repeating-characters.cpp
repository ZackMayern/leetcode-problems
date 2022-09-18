/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> result(256, -1);  // stores the occurence of characters and digits.
        int maxLength=0, start=-1;    // start is -1 just to get length 1 if there is only one character in the string 

        for(int i=0; i<s.size(); i++){
            if(result[s[i]]>start)    // if the index value of the result is greater than start value i.e -1, 
                start = result[s[i]]; // then start is assigned to result value 
            result[s[i]]=i;           // for normal operations result value for the character is incremented
            maxLength = max(maxLength, i-start);  // max length is max of max length or i-start.
        }
        return maxLength;
    }
};
// @lc code=end

