#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, d;
    cin >> n >> d;

    int a = d * 2 + 1;
    cout << (n + a - 1) / a << endl;

    return 0;
}