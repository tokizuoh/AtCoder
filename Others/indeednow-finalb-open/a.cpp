#include <bits/stdc++.h>
using namespace std;

long long MOD = 1e9 + 7;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long a, b, ans = 0;
    cin >> a >> b;
    for(long long i = a; i <= b; i++){
        ans += i * (1 + i) / 2 * i;
        ans %= MOD;
    }

    cout << ans << endl;

    return 0;
}