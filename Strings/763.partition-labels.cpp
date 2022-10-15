/*
 * @lc app=leetcode id=763 lang=cpp
 *
 * [763] Partition Labels
 */

// @lc code=start
class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> result;
        unordered_map<char, int> mp(26,0);
        for(int i=0; i<s.length(); i++)
            mp[s[i]] = i;
        
        int size = 0, end = 0;
        for(int i=0; i<s.length(); i++){
            size++;
            end = max(end, mp[s[i]]);

            if(i==end){
                result.push_back(size);
                size = 0;
            }
        }
        return result;
    }
};
// @lc code=end

