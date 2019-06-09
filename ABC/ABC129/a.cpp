#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int p, q, r;
    cin >> p >> q >> r;
    int a = p + q;
    int b = q + r;
    int c = r + p;

    cout << min(a, min(b, c)) << endl;

    return 0;
}