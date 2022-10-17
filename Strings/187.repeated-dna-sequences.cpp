/*
 * @lc app=leetcode id=187 lang=cpp
 *
 * [187] Repeated DNA Sequences
 */

// @lc code=start
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string, int> counter;
        vector<string> result;
        
        if (s.size() < 10) 
            return result;
        
        for (int i=0; i<s.size()-9; i++)
            counter[s.substr(i, 10)]++;
        
        for (auto a:counter)
            if (a.second > 1)
                result.push_back(a.first);
        
        return result;
    }
};
// @lc code=end

