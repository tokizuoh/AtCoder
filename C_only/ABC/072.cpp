#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    unordered_map<int, int> mp;
    REP(i, n){
        int a;
        cin >> a;
        mp[a]++;
        mp[a-1]++;
        mp[a+1]++;
    }

    int maxi = -1e9;
    for(auto x : mp){
        maxi = max(maxi, x.second);
    }

    cout << maxi << endl;

    return 0;
}