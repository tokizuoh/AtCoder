#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;
    int d = b - a;
    int t = d * (d + 1) / 2;
    cout << t - b << endl;

    return 0;
}