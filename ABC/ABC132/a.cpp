#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    map<char, int> mp;
    string s;
    cin >> s;
    for(int i = 0; i < 4; i++){
        mp[s[i]]++;
    }

    if(mp.size() != 2){
        cout << "No" << endl;
        return 0;
    }

    for(auto x : mp){
        if(x.second != 2){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}