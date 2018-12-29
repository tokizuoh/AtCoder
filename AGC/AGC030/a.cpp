#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long a, b, c;
    cin >> a >> b >> c;

    long long mc = min(a, c);
    a -= mc;
    c -= mc;

    long long mb = min(b, c) * 2;

    b -= mb / 2;
    c -= mb / 2;

    long long ans = mc + mb + b + (c >= 1);

    cout << ans << endl;

    return 0;
}