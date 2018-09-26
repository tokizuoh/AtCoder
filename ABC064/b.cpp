#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> A(n);
    REP(i, n) cin >> A[i];

    sort(A.begin(), A.end());

    int ans = 0;
    REP(i, n - 1){
        ans += A[i + 1] - A[i];
    }

    cout << ans << endl;

    return 0;
}