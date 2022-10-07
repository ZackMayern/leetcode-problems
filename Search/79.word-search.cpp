/*
 * @lc app=leetcode id=79 lang=cpp
 *
 * [79] Word Search
 */

// @lc code=start
class Solution {
public:
    bool search(vector<vector<char>>& board, int i, int j, string& word, int pos){
        if(pos == word.length() - 1) 
            return true;
        board[i][j] -= 65;
        if(i > 0 && board[i-1][j] == word[pos+1] && search(board, i-1, j, word, pos+1)) 
            return true;
        if(j > 0 && board[i][j-1] == word[pos+1] && search(board, i, j-1, word, pos+1)) 
            return true;
        if(i < board.size()-1 && board[i+1][j] == word[pos+1] && search(board, i+1, j, word, pos+1)) 
            return true;
        if(j < board[0].size()-1 && board[i][j+1] == word[pos+1] && search(board, i, j+1, word, pos+1)) 
            return true;
        board[i][j] += 65;
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int r = board.size();
        int c = board[0].size();
        for(int i = 0; i < r; ++i)
            for(int j = 0; j < c; ++j)
                if(board[i][j] == word[0] && search(board, i, j, word, 0)) return true;
        return false;
    }
};
// @lc code=end

