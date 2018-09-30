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

    map<int, int> mp[2];
    REP(i, n) mp[i%2][V[i]]++;

    vector<pair<int, int>> P[2];
    REP(i, 2){
        mp[i][0] = 0;
        /*
        `mp[i][0] = 0について`
        全部0入ってると思いきや違うみたいで、
        偶奇両者ともkeyが一つの場合、片方の全変が必要なので0をいれておく
        → 下ででてくるP[0][1].firstに0が入っていることにより、n/2-0 すなはち全部変えることになる
        */

        for(auto x : mp[i]){
            P[i].push_back({x.second, x.first});
        }
        sort(P[i].begin(), P[i].end(), greater<pair<int, int>>());
    }

    //最頻値の数値の種類が偶奇で違う場合
    if(P[0][0].second != P[1][0].second){
        int ans = n/2 - P[0][0].first + n/2 - P[1][0].first;
        cout << ans << endl;
    }else{
        int a1, a2;
        a1 = n/2 - P[0][1].first + n/2 - P[1][0].first;
        a2 = n/2 - P[0][0].first + n/2 - P[1][1].first;
        cout << min(a1, a2) << endl;
    }


    return 0;
}