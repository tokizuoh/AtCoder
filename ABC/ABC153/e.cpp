#include <bits/stdc++.h>
using namespace std;

const int H = 10010;
const int N = 1010;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int h, n;
    cin >> h >> n;
    vector<int> A(n), B(n);
    for(int i = 0; i < n; i++){
        cin >> A[i] >> B[i];
    }

    int dp[H];
    for(int i = 0; i <= H; i++){
        dp[i] = 1e9;
    }
    dp[0] = 0;

    for(int i = 1; i <= H; i++){
        for(int j = 0; j < n; j++){
            if(i - A[j] < 0){
                continue;
            }
            if(dp[i - A[j]] + B[j] < dp[i]){
                dp[i] = dp[i - A[j]] + B[j];
            }
        }
    }

    int ans = 1e9;
    for(int i = H; i >= h; i--){
        if(dp[i] == 1e9) continue;
        ans = min(ans, dp[i]);
    }

    cout << ans << endl;

    return 0;
}