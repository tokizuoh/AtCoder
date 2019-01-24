#include <bits/stdc++.h>
using namespace std;

const int N_MAX = 100010;

int dp[N_MAX];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long n, k;
    cin >> n >> k;

    long long T[n], K[n];
    for(long long i = 0; i < n; i++){
        cin >> T[i] >> K[i];
    }

    dp[0] = 0;
    for(int i = 1; i <= k; i++){
        for(int j = 0; j < n; j++){
            
        }
    }



    return 0;
}