#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h, w;
    cin >> h >> w;
    int C[10][10], A[h][w];
    REP(i, 10) REP(j, 10) cin >> C[i][j];

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            for(int k = 0; k < 10; k++){
                C[j][k] = min(C[j][k], C[j][i] + C[i][k]);
            }
        }
    }

    int cost = 0;
    REP(i, h){
        REP(j, w){
            int a;
            cin >> a;
            if(a == -1) continue;
            cost += C[a][1];
        }
    }

    cout << cost << endl;

    return 0;
}