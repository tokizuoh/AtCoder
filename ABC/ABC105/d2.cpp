#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long n, m;
    cin >> n >> m;
    vector<long long> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    vector<long long> B(n + 1, 0);
    for(int i = 1; i <= n; i++){
        B[i] += B[i - 1] + A[i - 1];
    }

    long long ans = 0;
    map<long long, long long> mp;
    for(auto x : B){
        mp[x % m]++;
    }

    for(auto x : mp){
        ans += x.second * (x.second - 1) / 2;
    }

    cout << ans << endl;

    return 0;
}