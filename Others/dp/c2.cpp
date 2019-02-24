#include <bits/stdc++.h>
using namespace std;

int dp[100010][3];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    int A[n][3];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> A[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                if(j == k) continue;
                dp[i + 1][k] = max(dp[i + 1][k], dp[i][j] + A[i][k]);
            }
        }
    }

    int maxi = -1e9;
    for(int i = 0; i < 3; i++){
        maxi = max(maxi, dp[n][i]);
    }

    cout << maxi << endl;

    return 0;
}