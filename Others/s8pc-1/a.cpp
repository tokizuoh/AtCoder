#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    double n;
    cin >> n;
    double ans = 1080 / (n - 1);
    cout << fixed << setprecision(6) << ans << endl;

    return 0;
}