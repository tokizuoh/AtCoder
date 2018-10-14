#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    unordered_map<int, bool> mp;
    REP(i, n){
        int a;
        cin >> a;
        mp[a] = !mp[a];
    }

    int cnt = 0;
    for(auto x : mp){
        cnt += x.second;
    }

    cout << cnt << endl;

    return 0;
}