/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman;
        roman['I']=1; 
        roman['V']=5; 
        roman['X']=10; 
        roman['L']=50; 
        roman['C']=100; 
        roman['D']=500; 
        roman['M']=1000;
        
        int result=0;
        for(int i=0; i<s.size(); i++){
            if(i+1<s.size() && roman[s[i]]<roman[s[i+1]])
                result-=roman[s[i]];
            else
                result+=roman[s[i]];
        }
        return result;
    }
};
// @lc code=end

