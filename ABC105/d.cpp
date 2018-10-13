#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<int> A(n);
    REP(i, n) cin >> A[i];

    vector<long long> B(n + 1);
    B[0] = 0;
    REP(i, n){
        if(i > 0) B[i + 1] = (B[i] + A[i]) % m;
        else B[i + 1] = A[i] % m;
    }

    unordered_map<long long, long long> mp;
    REP(i, n + 1){
        mp[B[i]]++;
    }

    long long ans = 0;
    for(auto x : mp){
        ans += x.second * (x.second - 1) / 2;
    }

    cout << ans << endl;

    return 0;
}