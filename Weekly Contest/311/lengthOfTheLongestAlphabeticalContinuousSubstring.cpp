// Question Link - https://leetcode.com/problems/length-of-the-longest-alphabetical-continuous-substring/

#include<bits/stdc++.h>

using namespace std;

int longestContinuousSubstring(string s){
    int i=0, count=1;
    for(int j=1; j<s.size(); j++){
        if(s[j]==s[i]+j-i)
            count=max(count, j-i+1);
        else
            i=j;
    }
    return count;
}

int main(){
    string s;
    cin >> s;

    int result = longestContinuousSubstring(s);
    cout << result;

    return 0;
}