/*
 * @lc app=leetcode id=1249 lang=cpp
 *
 * [1249] Minimum Remove to Make Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        for(int i=0;i<s.length();++i){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
                if(st.empty()){ 
                    s[i]='#';
                }
                else{
                    st.pop();
                }
            }
        }

        while(!st.empty()){
            s[st.top()]='#';
            st.pop();
        }
        
        string ans="";
        for(int i=0;i<s.length();++i){
            if(s[i]!='#'){
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};
// @lc code=end

