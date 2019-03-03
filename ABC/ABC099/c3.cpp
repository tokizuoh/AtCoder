#include <bits/stdc++.h>
using namespace std;

int dp[100010];
const int INF = 1e9;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> A;
    A.push_back(1);
    for(int i = 6; i <= n; i *= 6){
        A.push_back(i);
    }
    for(int i = 9; i <= n; i *= 9){
        A.push_back(i);
    }

    sort(A.begin(), A.end());

    for(int i = 0; i <= n; i++){
        dp[i] = INF;
    }

    dp[0] = 0;
    for(int i = 1; i <= n; i++){
        for(auto x : A){
            if(i < x) break;
            dp[i] = min(dp[i], dp[i - x] + 1);
        }
    }

    cout << dp[n] << endl;




    return 0;
}