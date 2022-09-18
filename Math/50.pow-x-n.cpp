/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
    double myPow(double x, int n) {
        double result=1.0;
        long exp = n;
        if(exp<0)
            exp=abs(exp);
        while(exp>0){
            if(exp%2==0){
                x=x*x;
                exp/=2;
            }
            else{
                result = result*x;
                exp-=1;
            }
        }
        if(n<0)
            result = 1/result;
    
        return result;
    }
};
// @lc code=end

