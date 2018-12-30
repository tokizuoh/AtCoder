#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100010;
int dp[MAX_N];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    // dp[i] : i番目(0-indexed)の柱までにたどり着く最小のコスト
    dp[0] = 0;
    dp[1] = abs(A[1] - A[0]);

    for(int i = 2; i < n; i++){
        dp[i] = min(dp[i - 2] + abs(A[i] - A[i - 2]), dp[i - 1] + abs(A[i] - A[i - 1]));
    }

    cout << dp[n - 1] << endl;


    return 0;
}