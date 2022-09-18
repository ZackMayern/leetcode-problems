/*
 * @lc app=leetcode id=500 lang=cpp
 *
 * [500] Keyboard Row
 */

// @lc code=start
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> output;           // Making a vector output where the words with same rows of alphabets will be added.
        unordered_map<char, int> rowOfAlphabets({    // Making a map where the alphabets are stored in respective row numbers.
            {'q', 1},
            {'w', 1},
            {'e', 1},
            {'r', 1},
            {'t', 1},
            {'y', 1},
            {'u', 1},
            {'i', 1},
            {'o', 1},
            {'p', 1},

            {'a', 2},
            {'s', 2},
            {'d', 2},
            {'f', 2},
            {'g', 2},
            {'h', 2},
            {'j', 2},
            {'k', 2},
            {'l', 2},
        });

        int startingNum;  // This will store the row number information. For eg- Alaska, A has row number value of 2.
        for(string word:words){  // For each element in words array.
            startingNum=rowOfAlphabets[tolower(word[0])];  //Stored the row value of the starting alphabet i.e. at index 0 of the element. 
            bool sameRow=true; // Suppose there is only one alphabet in the word. Return true

            for(int i=1; i<word.size(); i++){   // This for loop iterates through all the alphabets in the element of the words vector.
                if(rowOfAlphabets[tolower(word[i])] != startingNum){  // Checks whether the row value is same as the starting alphabet one.
                    sameRow = false;  //Return false and break the loop.
                    break;
                }
            }
            if (sameRow)  //If sameRow is true, the word is appended to the output vector. If it is false, then the word is skipped is the programs moves to the next word.
                output.push_back(word);
        }
        return output;  // Returns the output string vector to the main program.
    }
};
// @lc code=end

