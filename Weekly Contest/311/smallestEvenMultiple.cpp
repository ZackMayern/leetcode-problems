// Question Link - https://leetcode.com/problems/smallest-even-multiple/

#include<bits/stdc++.h>

using namespace std;

int smallestEvenMultiple(int n){
    if(n%2==0)
        return n;
    return n*2;
}

int main(){
    int n;
    cin >> n;

    int result = smallestEvenMultiple(n);
    cout << result;

    return 0;
}