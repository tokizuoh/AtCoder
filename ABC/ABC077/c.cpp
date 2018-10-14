#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> A(n), B(n), C(n);
    REP(i, n) cin >> A[i];
    REP(i, n) cin >> B[i];
    REP(i, n) cin >> C[i];
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    sort(C.begin(), C.end());

    long long ans = 0;
    for(int b = 0; b < n; b++){
        long long a = lower_bound(A.begin(), A.end(), B[b]) - A.begin();
        long long c = upper_bound(C.begin(), C.end(), B[b]) - C.begin(); 
        ans += a * (n - c);
    }

    cout << ans << endl;

    return 0;
}