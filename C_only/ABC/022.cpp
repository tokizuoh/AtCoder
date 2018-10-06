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

    vector<pair<int, int>> Z;
    REP(i, m){
        int u, v, l;
        cin >> u >> v >> l;
        u--;
        v--;
        if(u == 0){
            Z.push_back({v, l});
            D[u][v] = 1e9;
            D[v][u] = 1e9;
        }else{
            D[u][v] = l;
            D[v][u] = l;
        }
    }

    if(Z.size() < 2 or Z.size() == m){
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

    int A_size = Z.size() * (Z.size() - 1) / 2;
    int idx = 0;
    vector<int> A(A_size, 1e9);
    for(int i = 0; i < Z.size(); i++){
        int a, c1;
        a = Z[i].first;
        c1 = Z[i].second;
        for(int j = i + 1; j < Z.size(); j++){
            int b, c2;
            b = Z[j].first;
            c2 = Z[j].second;
            if(D[a][b] == 1e9) continue;
            else{
                A[idx] = D[a][b] + c1 + c2;
                idx++;
            }
        }
    }

    sort(A.begin(), A.end());

    cout << (A[0] != 1e9 ? A[0] : -1) << endl;

    return 0;
}