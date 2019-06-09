#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<int> A(m);
    map<int, bool> mp;
    for(int i = 0; i < m; i++){
        cin >> A[i];
        mp[A[i]] = true;
    }

    int dp[n + 1] = {};
    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        if(i >= 2 and !mp[i]) dp[i] = (dp[i] + dp[i - 2]) % MOD;
        if(i >= 1 and !mp[i]) dp[i] = (dp[i] + dp[i - 1]) % MOD;
    }

    cout << dp[n] << endl;

    return 0;
}