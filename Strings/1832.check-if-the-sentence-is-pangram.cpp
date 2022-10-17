/*
 * @lc app=leetcode id=1832 lang=cpp
 *
 * [1832] Check if the Sentence Is Pangram
 */

// @lc code=start
class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<int> result;
        for(int i=0; i<sentence.length(); i++)
            result.insert(sentence[i]);
        
        return result.size()==26;
    }
};
// @lc code=end

