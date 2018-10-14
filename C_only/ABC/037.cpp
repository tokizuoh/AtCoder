#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    vector<long long> A(n);
    REP(i, n) cin >> A[i];

    vector<int> B(n + 1, 0);
    for(int i = 0; i < n - k + 1; i++){
        B[i]++;
        B[i + k]--;
    }

    REP(i, n + 1){
        if(i) B[i] += B[i - 1];
    }

    long long ans = 0;
    REP(i, n){
        ans += B[i] * A[i];
    }
    
    cout << ans << endl;

    return 0;
}