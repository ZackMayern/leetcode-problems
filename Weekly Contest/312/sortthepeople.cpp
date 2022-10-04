// Question Link - https://leetcode.com/problems/sort-the-people/

#include<bits/stdc++.h>
using namespace std;

void sortPeople(vector<string>& names, vector<int>& heights){
    int n=names.size();
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(heights[i]>heights[j]){
                swap(names[i], names[j]);
                swap(heights[i], heights[j]);
            }
        }
    }
    reverse(names.begin(), names.end());
}

void printVector(vector<string> names){
    for(int i=0; i<names.size(); i++)
        cout << names[i] << " ";
}

int main(){
    int n;
    cin >> n;
    vector<int> heights;
    vector<string> names;

    for(int i=0; i<n; i++){
        string name;
        cin >> name;
        names.push_back(name);
    }

    for(int i=0; i<n; i++){
        int height;
        cin >> height;
        heights.push_back(height);
    }

    sortPeople(names, heights);
    printVector(names);
}