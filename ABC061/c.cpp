#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    long long k;
    cin >> n >> k;

    map<int, long long> mp;
    REP(i, n){
        int a, b;
        cin >> a >> b;
        mp[a] += b;
    }

    long long cnt = 0;
    for(auto x : mp){
        cnt += x.second;
        if(cnt >= k){
            cout << x.first << endl;
            return 0;
        }
    }

    return 0;
}