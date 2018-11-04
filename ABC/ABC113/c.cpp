#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    
    map<pair<int, int>, int> mp1;
    map<int, vector<int>> mp2;
    vector<int> P(m), Y(m);
    for(int i = 0; i < m; i++){
        int p, y;
        cin >> p >> y;
        P[i] = p;
        Y[i] = y;

        mp2[p].push_back(y);
    }

    for(auto& x : mp2){
        sort(x.second.begin(), x.second.end());
    }

    for(auto x : mp2){
        int idx = 0;
        for(auto z : x.second){
            mp1[{x.first, z}] = idx;
            idx++;
        }
    }

    for(int i = 0; i < m; i++){
        string ans = "";
        string tmp = to_string(P[i]);
        for(int j = 0; j < max(0, 6 - (int)tmp.size()); j++){
            ans += '0';
        }
        ans += tmp;
        string t = to_string(mp1[{P[i], Y[i]}] + 1);
        for(int j = 0; j < max(0, 6 - (int)t.size()); j++){
            ans += '0';
        }
        ans += t;
        cout << ans << endl;
    }




    return 0;
}