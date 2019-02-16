#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long n, m, ans = 1;
    cin >> n >> m;

    for(long long i = 1; i * i <= m; i++){
        if(m % i != 0) continue;
        long long j = m / i;
        if(i * n <= m) ans = max(ans, i);
        if(j * n <= m) ans = max(ans, j);
    }

    cout << ans << endl;

    return 0;
}