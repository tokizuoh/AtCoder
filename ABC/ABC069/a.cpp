#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n  >> m;

    int ans;
    ans = (n - 1) * (m - 1);

    cout << ans << endl;

    return 0;
}