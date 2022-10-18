/*
 * @lc app=leetcode id=38 lang=cpp
 *
 * [38] Count and Say
 */

// @lc code=start
class Solution {
public:
    string countingAndStoring(string s){
        string result = "";
        int count = 1;
        char ch = s[0];

        for(int i=1; i<s.size(); i++){
            if(s[i]!=ch){
                result.push_back(count+'0');
                result.push_back(ch);
                ch = s[i];
                count = 1;
            }
            else
                count++;
        }
        result.push_back(count+'0');
        result.push_back(ch);
        return result;
    }

    string countAndSay(int n) {
        string result = "1";
        for(int i=2; i<=n; i++)
            result = countingAndStoring(result);
        return result;
    }
};
// @lc code=end

