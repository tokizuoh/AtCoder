#include <bits/stdc++.h>
using namespace std;

long long MOD = 1e9 + 7;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<long long> A(n + 1, 0);
    for(int i = 2; i <= n; i++){
        int a = i, j = 2;
        while(a > 1){
            if(a % j) j++;
            else{
                a /= j;
                A[j]++;
            }
        }
    }

    long long ans = 1;
    for(int i = 2; i <= n; i++){
        ans = ((ans % MOD) * ((A[i] + 1) % MOD)) % MOD;
    }

    cout << ans << endl;

    return 0;
}