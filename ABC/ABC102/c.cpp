#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<long> A(n);
    REP(i, n){
        cin >> A[i];
        A[i] -= (i + 1);
    }
    
    sort(A.begin(), A.end());
    long mid = n % 2 ? A[n / 2] : (A[n / 2] + A[n / 2]) / 2;

    long ans = 0;
    REP(i, n) ans += abs(A[i] - mid);
    cout << ans << endl;

    return 0;
}