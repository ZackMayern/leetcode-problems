#include <bits/stdc++.h>
using namespace std;

void sortPeople(vector<string>& names, vector<int>& heights){
    for(int i=0; i<names.size(); i++){
        const int index = distance(begin(heights), max_element(next(begin(heights), i), end(heights)));
        swap(heights[i], heights[index]);
        swap(names[i], names[index]);
    }
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