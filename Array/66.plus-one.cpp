/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(), digits.end());
        int index=0;
        int flag=1;

        while(flag){
            if(index<digits.size()){
                if(digits[index]==9)
                    digits[index]=0;
                else{
                    digits[index]++;
                    flag=0;
                }
            }
            else{
                digits.push_back(1);
                flag=0;
            }
            index++;
        }
        reverse(digits.begin(), digits.end());
        return digits;
    }
};
// @lc code=end

