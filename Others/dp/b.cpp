#include <bits/stdc++.h>
using namespace std;

const int MAX = 100000;
const int INF = 1e9;
int dp[MAX];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    for(int i = 0; i <= n; i++){
        dp[i] = INF;
    }
    dp[0] = dp[1] = 0;

    for(int i = 1; i < n; i++){
        for(int j = 1; j <= k; j++){
            if(i + j > n) continue;
            dp[i + j] = min(dp[i + j], dp[i] + abs(A[i - 1] - A[i + j - 1]));
        }
    }

    cout << dp[n] << endl;

    return 0;
}