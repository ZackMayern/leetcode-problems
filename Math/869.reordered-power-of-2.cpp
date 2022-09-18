/*
 * @lc app=leetcode id=869 lang=cpp
 *
 * [869] Reordered Power of 2
 */

// @lc code=start
class Solution {
public:
    bool reorderedPowerOf2(int n) {
        int x = pow(10,9);             //Creating a constraint as specified in question 10^9
        map<int, vector<int>> mp;      //Creating a map with int type key and vectpr of values.
        
        for(int i=1;i<=x;i=i*2){       //This loop creates vector v of size 10 (0,1,2....9) with default
            int k=i;                   //values of 0 for each digits.
            vector<int> v(10,0);
            while(k){                  //extracts each digit occurence ranging from 1 to 10^9 on step of
                int r=k%10;            //two multiples. The occurence is added to the vector v for each 
                v[r]++;                //digit.
                k=k/10;
            }
            mp[i]=v;                   //Assigning vector to the map.
        }
        
        vector<int> countNoOfDigits(10,0);  //To count number of digits in the given int input
        
        while(n){                      //Similar to the above while loop in the for loop above. 
            int r=n%10;                
            countNoOfDigits[r]++;      //Counts the occurence of each digit and assigns it to the vector.
            n=n/10;
        }
        
        for(int i=1;i<=x;i=i*2){       //Compares the occurence of digits in the map and in the given
            vector<int> t=mp[i];       //input vector.
            bool flag=1;               //flag set to true by default.
            for(int j=0;j<=9;j++){
                if(t[j]!=countNoOfDigits[j]){   
                    flag=0;            //flag is flase when no match is found
                }
            }
            if(flag==1)
                return 1;              //If flag is true then return true. Else return 0
        }
        return 0;
    }
};
// @lc code=end

