#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int x, t;
    cin >> x >> t;

    cout << max(0, x - t) << endl;

    return 0;
}