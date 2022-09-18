/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //Using two pointers
        int leftPointer=0, rightPointer = 1, buy, sell, profit, maxProfit=0;

        while(leftPointer<prices.size() && rightPointer<prices.size()){
            buy = prices[leftPointer];
            sell = prices[rightPointer];
            profit = sell - buy;
            
            if(profit<=0){
                leftPointer=rightPointer;
                rightPointer++;
                profit = 0;
            }
            
            if(profit>0){
                maxProfit = max(maxProfit, profit);
                rightPointer++;
            }
        }
        return maxProfit;

        //Using two pointers but less conditional statements
        int leftPointer = 0, rightPointer = 1, maxProfit = 0;

        while(rightPointer<prices.size()){
            if(prices[leftPointer]<prices[rightPointer]){
                int profit = prices[rightPointer]-prices[leftPointer];
                maxProfit = max(maxProfit, profit);
            }
            else{
                leftPointer = rightPointer;
            }
            rightPointer++;
        }

        return maxProfit;
    }
};
// @lc code=end

