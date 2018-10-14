#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> V(n);
    REP(i, n) cin >> V[i];

    unordered_map<int, int> mp[2];
    REP(i, n) mp[i%2][V[i]]++;
    
    vector<pair<int, int>> P[2];
    REP(i, 2){
        mp[i][0] = 0;
        for(auto x : mp[i]){
            P[i].push_back({x.second, x.first});
        }
        sort(P[i].rbegin(), P[i].rend());
    }
    
    int ans = 0;
    if(P[0][0].second != P[1][0].second){
        ans = (n/2 - P[0][0].first) + (n/2 - P[1][0].first);
    }else{
        if(P[0][1].first >= P[1][1].first){
            ans = (n/2 - P[0][1].first) + (n/2 - P[1][0].first);
        }else{
            ans = (n/2 - P[0][0].first) + (n/2 - P[1][1].first);
        }
    }
    cout << ans << endl;

    return 0;
}