#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h, w;
    cin >> h >> w;

    char C[h][w];
    REP(i, h) REP(j, w) cin >> C[i][j];

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    REP(i, h){
        REP(j, w){
            if(C[i][j] == '#'){
                bool f = true;
                REP(k, 4){
                    int nx, ny;
                    nx = i + dx[k];
                    ny = j + dy[k];
                    if(nx < 0 or ny < 0 or nx >= h or ny >= w){
                        continue;
                    }
                    if(C[nx][ny] == '#'){
                        f = false;
                        break;
                    }
                }
                if(f){
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "Yes" << endl;

    return 0;
}