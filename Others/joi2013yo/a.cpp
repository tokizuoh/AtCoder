#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int l, a, b, c, d;
    cin >> l >> a >> b >> c >> d;

    int n, m;
    n = (a + (c - 1)) / c;
    m = (b + (d - 1)) / d;

    cout << l - max(n, m) << endl;

    return 0;
}