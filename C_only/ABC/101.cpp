#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k, t;
    cin >> n >> k;
    REP(i, n) cin >> t;

    cout << 1 + ((n - k) + (k - 2)) / (k - 1) << endl;

    return 0;
}