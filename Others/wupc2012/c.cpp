#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int h, w, sx, sy, cx, cy, gx, gy, ans = 0;
    cin >> h >> w;
    char C[h][w];
    int D[h][w];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> C[i][j];
            if(C[i][j] == 'S'){sx = i; sy = j;}
            if(C[i][j] == 'C'){cx = i; cy = j;}
            if(C[i][j] == 'G'){gx = i; gy = j;}
            D[i][j] = 1e9;
        }
    }

    D[sx][sy] = 0;

    queue<P> q;
    q.push({sx, sy});
    while(!q.empty()){
        P p = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx, ny;
            nx = dx[i] + p.first;
            ny = dy[i] + p.second;
            if(nx < 0 or ny < 0 or nx >= h or ny >= w) continue;
            if(C[nx][ny] == '#') continue;
            if(D[nx][ny] > D[p.first][p.second] + 1){
                D[nx][ny] = D[p.first][p.second] + 1;
                if(nx == cx and ny == cy) continue;
                else q.push({nx, ny});
            }
        }
    }

    if(D[cx][cy] != 1e9) ans += D[cx][cy];
    else{cout << -1 << endl; return 0;}

    q.push({cx, cy});
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            D[i][j] = 1e9;
        }
    }
    D[cx][cy] = 0;
    
    while(!q.empty()){
        P p = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx, ny;
            nx = dx[i] + p.first;
            ny = dy[i] + p.second;
            if(nx < 0 or ny < 0 or nx >= h or ny >= w) continue;
            if(C[nx][ny] == '#') continue;
            if(D[nx][ny] > D[p.first][p.second] + 1){
                D[nx][ny] = D[p.first][p.second] + 1;
                if(nx == gx and ny == gy) continue;
                else q.push({nx, ny});
            }
        }
    }

    if(D[gx][gy] != 1e9) ans += D[gx][gy];
    else{cout << -1 << endl; return 0;}
    
    cout << ans << endl;

    return 0;
}