#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m, r;
    cin >> n >> m >> r;
    vector<int> R(r);
    for(int i = 0; i < r; i++){
        cin >> R[i];
        R[i]--;
    }

    int D[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j) D[i][j] = 0;
            else D[i][j] = 1e9;
        }
    }

    for(int i = 0; i < m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        a--; b--;
        D[a][b] = c;
        D[b][a] = c;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                D[j][k] = min(D[j][k], D[j][i] + D[i][k]);
            }
        }
    }

    vector<int> J(r);
    for(int i = 0; i < r; i++){
        J[i] = i;
    }

    int ans = 1e9;
    do{
        int bef, cost = 0;
        for(int i = 0; i < r; i++){
            if(i > 0){
                cost += D[bef][R[J[i]]];
            }
            bef = R[J[i]];
        }
        ans = min(ans, cost);
    }while(next_permutation(J.begin(), J.end()));

    cout << ans << endl;

    return 0;
}