#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    string s;
    cin >> s;

    map<char, int> mp;
    for(int i = 0; i < n; i++){
        mp[s[i]]++;
    }

    int mini = 1e9, maxi = -1e9;
    for(auto x : mp){
        mini = min(mini, x.second);
        maxi = max(maxi, x.second);
    }

    if(mp.size() == 1) mini = 0;
    cout << maxi << ' ' << mini << endl;

    return 0;
}