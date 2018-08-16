#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int l, u;
    l = max(a, c);
    u = min(b, d);

    cout << max(u - l, 0) << endl;

    return 0;
}