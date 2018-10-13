#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<long long> A(n);
    REP(i, n) cin >> A[i];

    unordered_map<long long, long long> mp;
    vector<long long> B(n + 1);
    B[0] = 0;
    mp[0]++;
    for(int i = 0; i < n; i++){
        if(i > 0) B[i + 1] += B[i] + A[i];
        else B[i + 1] = A[i];
        mp[B[i + 1]]++;
    }

    long long ans = 0;
    for(auto x : mp){
        ans += x.second * (x.second - 1) / 2;
    }

    cout << ans << endl;

    return 0;
}