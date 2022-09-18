/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int maxLength = 1;
        int start = 0, end = 0;
        
        if(n<=1)
            return s;

        //For odd palindrome string
        for(int i=0; i<n-1; i++){
            int l = i, r = i;
            while(l >= 0 && r < n){
                if(s[l]==s[r]){
                    l--;
                    r++;
                }
                else
                    break;
            }
            int len = r-l-1;
            if(len > maxLength){
                maxLength = len;
                start = l+1;
                end = r-1;
            }
        }

        //For even palindrome string
        for(int i=0; i<n-1; i++){
            int l = i, r = i+1;
            while(l >= 0 && r < n){
                if(s[l]==s[r]){
                    l--;
                    r++;
                }
                else
                    break;
            }
            int len = r-l-1;
            if(len > maxLength){
                maxLength = len;
                start = l+1;
                end = r-1;
            }
        }
        return s.substr(start, maxLength);

        // DP Approach
        // int n = s.size();
        // int maxLength = 0;
        // string answer;
        // vector<vector<int>> matrix(n,vector<int>(n,0));
        
        // for(int diff=0; diff<n; diff++){
        //     for(int i=0, j=i+diff; j<n; i++, j++){
        //         if(i==j)
        //             matrix[i][j]=1;

        //         else if(diff==1){
        //             if(s[i]==s[j])
        //                 matrix[i][j]=2;
        //             else
        //                 matrix[i][j]=0;
        //         }

        //         else{
        //             if(s[i]==s[j] && matrix[i+1][j-1])
        //                 matrix[i][j]=matrix[i+1][j-1]+2;
        //         }

        //         if(matrix[i][j]){
        //             if(j-i+1>maxLength){
        //                 maxLength = j-i+1;
        //                 answer = s.substr(i,maxLength);
        //             }
        //         }
        //     }
        // }
        // return answer;
    }
};
// @lc code=end

