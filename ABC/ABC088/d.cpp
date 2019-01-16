#include <bits/stdc++.h>
using namespace std;

const int MAX = 60;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h, w, black = 0;
    cin >> h >> w;

    char C[MAX][MAX];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> C[i][j];
            if(C[i][j] == '#'){
                black++;
            }
        }
    }

    int D[MAX][MAX];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            D[i][j] = 1e9;
        }
    }

    D[0][0] = 0;

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    queue<pair<int, int>> q;
    q.push({0, 0});
    while(!q.empty()){
        pair<int, int> p = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
            if(nx < 0 or ny < 0 or nx >= h or ny >= w){
                continue;
            }
            if(C[nx][ny] == '#'){
                continue;
            }
            if(D[p.first][p.second] + 1 < D[nx][ny]){
                D[nx][ny] = D[p.first][p.second] + 1;
                q.push({nx, ny});
            }
        }
    }

    if(D[h - 1][w - 1] == 1e9){
        cout << -1 << endl;
    }else{
        // -1はスタート地点
        cout << h * w - black - D[h - 1][w - 1] - 1 << endl;
    }

    return 0;
}