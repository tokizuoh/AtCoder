#include <bits/stdc++.h>
using namespace std;

int dp[110];

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    string s;
    cin >> s;

    for(int i = 0; i < n; i++){
        dp[i] = 1e9;
    }

    dp[0] = 0;
    for(int i = 1; i < n; i++){
        if(i >= 3) dp[i] = min(dp[i], dp[i - 3] + (s[i] == 'X'));
        if(i >= 2) dp[i] = min(dp[i], dp[i - 2] + (s[i] == 'X'));
        if(i >= 1) dp[i] = min(dp[i], dp[i - 1] + (s[i] == 'X'));
    }

    cout << dp[n-1] << endl;

    return 0;
}