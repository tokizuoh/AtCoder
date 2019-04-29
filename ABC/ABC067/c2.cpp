#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<long long> A(n + 1, 0);
    for(int i = 2; i <= n; i++){
        int a = i, j = 2;
        while(a > 1){
            if(a % j == 0){
                a /= j;
                A[j]++;
            }else{
                j++;
            }
        }
    }

    long long ans = 1;
    for(int i = 2; i <= n; i++){
        if(A[i] > 0){
            ans = ((ans % MOD) * ((A[i] + 1) % MOD)) % MOD;
        }
    }

    cout << ans << endl;

    return 0;
}