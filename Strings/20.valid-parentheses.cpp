/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                st.push(s[i]);
            else{
                if(st.empty())
                    return false;
                char c=st.top();
                st.pop();
                if(s[i]==')' && c=='(' || s[i]==']' && c=='[' || s[i]=='}' && c=='{');
                else
                    return false;
            }
        }
        if(st.empty())
                return true;
        return false;
    }
};
// @lc code=end

