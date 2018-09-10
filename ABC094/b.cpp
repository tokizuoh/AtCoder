#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m, x;
    cin >> n >> m >> x;
    vector<int> A(m);
    REP(i, m) cin >> A[i];

    int idx = lower_bound(A.begin(), A.end(), x) - A.begin();
    cout << min(idx, m - idx) << endl;

    return 0;
}