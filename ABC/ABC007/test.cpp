#include <bits/stdc++.h>
using namespace std;

const int MAX = 60;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int r, c;
    cin >> r >> c;

    int sx, sy;
    cin >> sx >> sy;
    sx--; sy--;
    int gx, gy;
    cin >> gx >> gy;
    gx--; gy--;

    char C[MAX][MAX];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> C[i][j];
        }
    }

    queue<pair<int, int>> q;
    q.push({sx, sy});

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    int D[MAX][MAX];
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            D[i][j] = 1e9;
        }
    }

    D[sx][sy] = 0;

    while(!q.empty()){
        pair<int, int> t = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx, ny;
            nx = t.first + dx[i];
            ny = t.second + dy[i];
            if(nx < 0 or ny < 0 or nx >= r or ny >= c){
                continue;
            }
            if(C[nx][ny] == '#'){
                continue;
            }
            if(D[t.first][t.second] + 1 < D[nx][ny]){
                D[nx][ny] = D[t.first][t.second] + 1;
                for(int i = 0; i < r; i++){
                    for(int j = 0; j < c; j++){
                        if(D[i][j] == 1e9) cout << 'R' << ' ';
                        else cout << D[i][j] << ' ';
                    }
                    cout << endl;
                }
                cout << "--------------------------" << endl;
                q.push({nx, ny});
            }
        }
    }

    cout << D[gx][gy] << endl;

    return 0;
}