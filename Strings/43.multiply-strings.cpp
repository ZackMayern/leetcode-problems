/*
 * @lc app=leetcode id=43 lang=cpp
 *
 * [43] Multiply Strings
 */

// @lc code=start
class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0")
            return "0";
        vector<int> product(num1.size()+num2.size(), 0);

        for(int i=num1.size()-1; i>=0; i--){
            for(int j=num2.size()-1; j>=0; j--){
                product[i+j+1]+=(num1[i]-'0')*(num2[j]-'0');
                product[i+j]+=product[i+j+1]/10;
                product[i+j+1]%=10;
            }
        }
        
        int i=0;
        while(i<product.size() && product[i]==0)
            i++;
        
        string res="";
        while(i<product.size())
            res.push_back(product[i++]+'0');
        
        return res;
    }
};
// @lc code=end

