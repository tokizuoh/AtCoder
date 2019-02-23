#include <bits/stdc++.h>
using namespace std;

const int MAX = 100010;
const int INF = 1e9;
int dp[MAX]; // dp[i]: i円を払うのに必要な最小の紙幣の枚数

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> A;
    A.push_back(1);
    int t = 6;
    while(t <= MAX){
        A.push_back(t);
        t *= 6;
    }
    t = 9;
    while(t <= MAX){
        A.push_back(t);
        t *= 9;
    }
    
    sort(A.begin(), A.end());

    for(int i = 0; i <= n; i++){
        dp[i] = INF;
    }

    dp[0] = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < (int)A.size(); j++){
            if(i - A[j] < 0) continue;
            dp[i] = min(dp[i], dp[i - A[j]] + 1);
        }
    }

    cout << dp[n] << endl;

    return 0;
}