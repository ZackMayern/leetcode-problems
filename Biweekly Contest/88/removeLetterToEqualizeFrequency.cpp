// Question Link - https://leetcode.com/problems/remove-letter-to-equalize-frequency/

#include <bits/stdc++.h>
using namespace std;

bool equalFrequency(string word){
    vector<int> freq(26,0);

    for(auto x:word)
        freq[x-'a']++;
    
    for(int i=0; i<26; i++){
        vector<int> temp=freq;
        if(temp[i]<=0)
            continue;

        temp[i]--;
        set<int> st;

        for(auto it:temp){
            if(it>0)
                st.insert(it);
        }

        if(st.size()==1)
            return true;
    }
    return false;
}

int main(){
    string word;
    cin >> word;

    bool result=equalFrequency(word);

    if(result)
        cout << "true";
    else
        cout << "false";
}