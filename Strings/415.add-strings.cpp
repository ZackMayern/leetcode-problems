/*
 * @lc app=leetcode id=415 lang=cpp
 *
 * [415] Add Strings
 */

// @lc code=start
class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size()-1;
        int j = num2.size()-1;
        int carry = 0;
        string result = "";
        while(i>=0 || j>=0 || carry){
            long sum = 0;
            if(i>=0){
                sum += num1[i]-'0';
                i--;
            }
            if(j>=0){
                sum += num2[j]-'0';
                j--;
            }
            sum += carry;
            carry = sum/10;
            result += to_string(sum%10);
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
// @lc code=end

