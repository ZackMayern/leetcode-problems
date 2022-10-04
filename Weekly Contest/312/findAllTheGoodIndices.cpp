// Question Link - https://leetcode.com/problems/find-all-good-indices/

#include<bits/stdc++.h>
using namespace std;

vector<int> goodIndices(vector<int>& nums, int k){
    int n=nums.size();
    vector<int> inc(n,1);
    vector<int> dec(n,1);
    vector<int> result;

    for(int i=1; i<n; i++)
        if(nums[i]<=nums[i-1])
            dec[i]=1+dec[i-1];
    
    for(int j=n-2; j>=0; j--)
        if(nums[j]<=nums[j+1])
            inc[j]=1+inc[j+1];
    
    for(int i=k; i<n-k; i++){
        if(inc[i+1]>=k && dec[i-1]>=k)
            result.push_back(i);
    }
    return result;
}

void printVector(vector<int> result){
    for(int i=0; i<result.size(); i++)
        cout << result[i] << " ";
}

int main(){
    int n,k;
    cin >> n;
    vector<int> nums;

    for(int i=0; i<n; i++){
        int ele;
        cin >> ele;
        nums.push_back(ele);
    }
    cin >> k;
    vector<int> result=goodIndices(nums, k);

    printVector(result);
}