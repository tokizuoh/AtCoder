#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    map<string, long long> mp;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        mp[s]++;
    }

    long long ans = 0;
    for(auto x : mp){
        ans += x.second * (x.second - 1) / 2;
    }

    cout << ans << endl;

    return 0;
}