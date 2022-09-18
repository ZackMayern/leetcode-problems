/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        int leftPointer = 0, rightPointer = numbers.size()-1;
        while(leftPointer<rightPointer){
            int sum = numbers[leftPointer]+numbers[rightPointer];

            if(sum>target)
                rightPointer--;

            else if(sum<target)
                leftPointer++;

            else{
                result.push_back(leftPointer+1);
                result.push_back(rightPointer+1);
                return result;
            }
        }
        return {};
    }
};
// @lc code=end

