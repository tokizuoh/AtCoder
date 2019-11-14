#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long n;
    cin >> n;

    long long ans = 1e18;
    for(long long i = 1; i <= (int)(sqrt(n)); i++){
        if(n % i != 0) continue;
        ans = min(ans, (i + n / i) - 2);
    }

    cout << ans << endl;

    return 0;
}