/*
 * @lc app=leetcode id=229 lang=cpp
 *
 * [229] Majority Element II
 */

// @lc code=start
class Solution {
public:
    vector<int> majorityElement(vector<int> &nums){
        vector<int> result;
        int num1, num2, count1=0, count2=0;
        for (auto ele:nums){
            if(ele==num1)
                count1++;
            else if(ele==num2)
                count2++;
            else if(count1==0){
                num1=ele;
                count1=1;
            }
            else if (count2 == 0){
                num2=ele;
                count2=1;
            }
            else{
                count1--;
                count2--;
            }
        }

        count1=0, count2=0;
        for (int i=0; i<nums.size(); i++){
            if (nums[i]==num1)
                count1++;
            else if (nums[i]==num2)
                count2++;
        }
        if (count1 > nums.size()/3)
            result.push_back(num1);
        if (count2 > nums.size()/3)
            result.push_back(num2);
        return result;
    }
};
// @lc code=end

