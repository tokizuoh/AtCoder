#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    map<string, int> mp;
    REP(i, n){
        string s;
        cin >> s;
        mp[s]++;
    }

    int m;
    cin >> m;
    REP(i, m){
        string t;
        cin >> t;
        mp[t]--;
    }

    int ans = 0;
    for(auto x : mp){
        ans = max(ans, x.second);
    }

    cout << ans << endl;

    return 0;
}