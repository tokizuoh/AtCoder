#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long n, k;
    cin >> n >> k;

    vector<long long> cnt(k, 0);
    for(int i = 1; i <= n; i++){
        cnt[i % k]++;
    }

    long long ans = 0;
    for(int i = 0; i < k; i++){
        if(i * 2 % k != 0) continue;
        ans += cnt[i] * cnt[i] * cnt[i];
        if(k % 2) break;
    }
    cout << ans << endl;

    return 0;
}