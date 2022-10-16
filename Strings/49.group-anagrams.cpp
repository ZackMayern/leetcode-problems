/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    // string countSort(string s){
    //     string result;
    //     vector<int> mp(26,0);
    //     for(char c:s)
    //         mp[c-'a']++;
        
    //     for(int i=0; i<26; i++)
    //         result += string(mp[i], i+'a');
        
    //     return result;
    // }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> mp;
        for(string s:strs){
            string temp = s;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(s);
        }

        for(auto x:mp)
            result.push_back(x.second);

        return result;
    }
};
// @lc code=end

