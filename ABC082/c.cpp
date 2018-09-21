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
    }

    int cnt = 0;
    for(auto x : mp){
        if(x.first > x.second) cnt += x.second;
        if(x.first < x.second) cnt += x.second - x.first;
    }

    cout << cnt << endl; 

    return 0;
}