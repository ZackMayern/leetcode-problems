// Question Link - https://leetcode.com/problems/maximum-matching-of-players-with-trainers/

#include<bits/stdc++.h>

using namespace std;

int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers){
    sort(players.begin(), players.end());
    sort(trainers.begin(), trainers.end());
    int i=0,j=0,count=0;

    while(i<players.size() && j<trainers.size()){
        if(players[i]<=trainers[j]){
            count++;
            i++;
            j++;
        }
        else
            j++;
    }
    return count;
}

int main(){
    int m,n;
    cin >> m;
    cin >> n;
    vector<int> players, trainers;

    for(int i=0; i<m; i++){
        int ele;
        cin >> ele;
        players.push_back(ele);
    }

    for(int i=0; i<n; i++){
        int ele;
        cin >> ele;
        trainers.push_back(ele);
    }

    int result=matchPlayersAndTrainers(players, trainers);

    cout << result;

    return 0;
}