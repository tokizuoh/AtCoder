#include <bits/stdc++.h>
using namespace std;

int dp[1000];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> B(n);
    for(int i = 0; i < n; i++){
        cin >> B[i];
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        dp[i] = 1;
        for(int j = 0; j < i; j++){
            if(B[i] > B[j]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ans = max(ans, dp[i]);
    }

    cout << ans << endl;

    return 0;
}