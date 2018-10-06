#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    
    int D[n][n];
    REP(i, n){
        REP(j, n){
            if(i == j) D[i][j] = 0;
            else D[i][j] = 1e9;
        }
    }

    vector<pair<int, int>> ZTT;   //Zero to Tsunagaru
    REP(i, m){
        int u, v, l;
        cin >> u >> v >> l;
        u--;
        v--;
        if(u == 0){
            ZTT.push_back({v, l});
            D[u][v] = 0;
            D[u][v] = 0;
        }else{
            D[u][v] = l;
            D[v][u] = l;
        }
    }

    if(ZTT.size() == m or ZTT.size() < 2){
        cout << -1 << endl;
        return 0;
    }

    REP(i, n){
        REP(j, n){
            REP(k, n){
                D[j][k] = min(D[j][k], D[j][i] + D[i][k]);
            }
        }
    }

    vector<int> Cost;
    for(int i = 0; i < ZTT.size(); i++){
        int a, c1;
        a = ZTT[i].first;
        c1 = ZTT[i].second;
        for(int j = i + 1; j < ZTT.size(); j++){
            int b, c2;
            b = ZTT[j].first;
            c2 = ZTT[j].second;
            Cost.push_back(D[a][b] + c1 + c2);
        }
    }

    sort(Cost.begin(), Cost.end());
    cout << Cost[0] << endl;

    return 0;
}