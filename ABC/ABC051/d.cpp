#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    int G[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j) G[i][j] = 0;
            else G[i][j] = 1e9;
        }
    }

    int E[m][3];
    for(int i = 0; i < m; i++){
        cin >> E[i][0] >> E[i][1] >> E[i][2];
        E[i][0]--; E[i][1]--;
        G[E[i][0]][E[i][1]] = E[i][2];
        G[E[i][1]][E[i][0]] = E[i][2];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                G[j][k] = min(G[j][k], G[j][i] + G[i][k]);
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < m; i++){
        //最短経路が更新 -> そこを通る必要がない
        if(G[E[i][0]][E[i][1]] == E[i][2]);
        else{
            //だからといって「どの異なる2頂点間の，どの最短経路にも含まれない辺の数」としてカウントしていいんですか？
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}