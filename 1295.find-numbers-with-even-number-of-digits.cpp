/*
 * @lc app=leetcode id=1295 lang=cpp
 *
 * [1295] Find Numbers with Even Number of Digits
 */

// @lc code=start
class Solution {
public:
    int count_digits(int n){
        int count=0;
        if(n==0){
            return 1;
        }
        while(n){
            count++;
            n=n/10;
        }
        return count;
    }

    int findNumbers(vector<int>& nums) {
       int evennumber=0;
       for(int i=0; i<nums.size(); i++){
        if(count_digits(nums[i])%2==0)
            evennumber++;
       }
       return evennumber;
    }
};
// @lc code=end
