#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long n, a, b, ans;
    cin >> n >> a >> b;

    ans = (a + (n - 1) * b) - ((n - 1) * a + b) + 1;
    cout << max(0LL, ans) << endl;

    return 0;
}