#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, x;
    cin >> n >> x;

    cout << min(x - 1, n - x) << endl;

    return 0;
}