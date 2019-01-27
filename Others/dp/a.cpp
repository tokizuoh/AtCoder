#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<long long> H(n + 1, 0);
    for(int i = 1; i <= n; i++){
        cin >> H[i];
    }

    vector<long long> dp(n + 1, 1e18);
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = abs(H[2] - H[1]);
    for(int i = 3; i <= n; i++){
        dp[i] = min(dp[i - 2] + abs(H[i] - H[i - 2]), dp[i - 1] + abs(H[i] - H[i - 1]));
    }

    cout << dp[n] << endl;

    /*
    cout << "------------" << endl;
    for(int i = 0; i <= n; i++){
        cout << dp[i] << ' ';
    }
    cout << endl;
    */

    return 0;
}