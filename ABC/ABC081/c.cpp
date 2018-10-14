#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    REP(i, n){
        int a;
        cin >> a;
        mp[a]++;        
    }
    
    vector<int> B;
    for(auto x : mp){
        B.emplace_back(x.second);
    }

    sort(B.begin(), B.end());

    int ans = 0;
    REP(i, max(0, (int)mp.size() - k)){
        ans += B[i];
    }

    cout << ans << endl;

    return 0;
}