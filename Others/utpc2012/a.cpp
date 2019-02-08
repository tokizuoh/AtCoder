#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    map<char, pair<int, bool>> mp;
    for(int i = 0; i < 4; i++){
        mp[s[i]].first++;
        mp[s[i]].second = true;
    }

    for(int i = 5; i < 10; i++){
        if(i == 7) continue;
        mp[s[i]].first--;
    }

    for(auto x : mp){
        if(x.second.first != 0){
            cout << "no" << endl;
            return 0;
        }
    }

    cout << "yes" << endl;
    return 0;
}