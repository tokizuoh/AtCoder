#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;

const int N = 1000010;
long long fac[N], finv[N], inv[N];

void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < N; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long X, Y;
    cin >> X >> Y;

    if((X + Y) % 3 != 0){
        cout << 0 << endl;
        return 0;
    }

    COMinit();

    long long x, y;
    x = (2 * Y - X) / 3;
    y = (2 * X - Y) / 3;

    cout << COM(x + y, x) << endl;

    return 0;
}