#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    REP(i, n) cin >> A[i];

    int ans = 1e9;
    for(int i = 0; i < n - k + 1; i++){
        int cost = A[i + k - 1] - A[i] + min(abs(A[i]), abs(A[i + k - 1]));
        ans = min(ans, cost);
    }
    cout << ans << endl;

    return 0;
}