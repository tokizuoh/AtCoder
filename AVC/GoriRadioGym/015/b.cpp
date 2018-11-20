#include <bits/stdc++.h>
using namespace std;
int MOD = 1e9 + 7;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    long long ans = 1;
    for(int i = 1; i <= n; i++){
        ans = (ans * i) % MOD;
    }

    cout << ans << endl;

    return 0;
}