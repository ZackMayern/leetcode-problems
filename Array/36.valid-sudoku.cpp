/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */

// @lc code=start
class Solution {
public:
    bool validCheck(vector<vector<char>>& board, int row, int column){
        if(board[row][column]=='.')
            return true;
        for(int i=0; i<9; i++){
            if(board[row][column]==board[i][column] && i!=row)
                return false;
            if(board[row][column]==board[row][i] && i!=column)
                return false;
            if(board[row][column]==board[row-row%3+i/3][column-column%3+i%3] && row%3!=i/3 && column%3!=i%3)
                return false;
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int row=0; row<9; row++){
            for(int col=0; col<9; col++){
                if(!validCheck(board, row, col))
                    return false;
            }
        }
        return true;
    }
};
// @lc code=end

