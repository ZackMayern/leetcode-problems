// Question Link - https://leetcode.com/problems/count-days-spent-together/

#include<bits/stdc++.h>

using namespace std;

int totalDays(string s){
    vector<int> dayVector = {0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int months=10*(s[0]-'0')+s[1]-'0';
    int days=10*(s[3]-'0')+s[4]-'0';
    months--;
    while(months>0){
        days+=dayVector[months];
        months--;
    }
    return days;
}

int daysSpent (string arriveAlice, string leaveAlice, string arriveBob, string leaveBob){
    int count=0;
    int a1=totalDays(arriveAlice), a2=totalDays(leaveAlice);
    int b1=totalDays(arriveBob), b2=totalDays(leaveBob);

    for(int i=1; i<=365; i++){
        if(a1<=i && i<=a2 && b1<=i && i<=b2)
            count++;
    }
    return count;
}
int main(){
    string arriveAlice, leaveAlice;
    string arriveBob, leaveBob;

    //All String inputs to be size of 5.
    //String Format = mm-dd;
    cin >> arriveAlice;
    cin >> leaveAlice;
    cin >> arriveBob;
    cin >> leaveBob;

    int result=daysSpent(arriveAlice, leaveAlice, arriveBob, leaveBob);

    cout << result;

    return 0;
}