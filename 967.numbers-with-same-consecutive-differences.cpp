/*
 * @lc app=leetcode id=967 lang=cpp
 *
 * [967] Numbers With Same Consecutive Differences
 */

// @lc code=start
class Solution {
public:
    void dfs(int num, int n, int k, vector<int>& results){
        if(n==0){
            results.push_back(num);
            return;
        }
        int lastDigit = num%10;
        if(lastDigit >= k) 
            dfs(num*10+lastDigit-k, n-1, k, results);
        if(lastDigit+k < 10 && k>0) 
            dfs(num*10+lastDigit+k, n-1, k, results);
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> results;
        if(n == 1) results.push_back(0);
        for(int i=1; i<10; i++)
            dfs(i, n-1, k, results);
        
        return results;
    }
};
// @lc code=end

