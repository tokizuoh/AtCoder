#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<long long> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    vector<long long> S(n + 1, 0);
    unordered_map<long long, long long> mp;
    
    mp[0]++;
    for(int i = 1; i < n + 1; i++){
        S[i] += S[i - 1] + A[i - 1];
        mp[S[i]]++;
    }

    long long ans = 0;
    for(auto x : mp){
        ans += x.second * (x.second - 1) / 2; 
    }

    cout << ans << endl;
    
    return 0;
}