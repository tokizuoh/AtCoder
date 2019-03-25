#include <bits/stdc++.h>
using namespace std;

const int N = 1010;
char C[N][N];
int D[N][N];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int h, w, x, sx, sy, gx, gy;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    cin >> h >> w >> x;

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            D[i][j] = 1e9;
        }
    }

    queue<pair<int, int>> q;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> C[i][j];
            if(C[i][j] == '@'){
                q.push({i, j});
                D[i][j] = 0;
            }else if(C[i][j] == 'S'){
                sx = i; sy = j;
            }else if(C[i][j] == 'G'){
                gx = i; gy = j;
            }
        }
    }

    while(!q.empty()){
        pair<int, int> p = q.front();
        q.pop();
        int a = p.first;
        int b = p.second;
        for(int i = 0; i < 4; i++){
            int nx = dx[i] + a;
            int ny = dy[i] + b;
            if(nx < 0 or ny < 0 or nx >= h or ny >= w){
                continue;
            }
            if(C[nx][ny] == '#') continue;
            if(D[nx][ny] > D[a][b] + 1){
                D[nx][ny] = D[a][b] + 1;
                q.push({nx, ny});
            }
        }
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(D[i][j] <= x){
                C[i][j] = '#';
            }
        }
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            D[i][j] = 1e9;
        }
    }
    D[sx][sy] = 0;

    q.push({sx, sy});
    while(!q.empty()){
        pair<int, int> p = q.front();
        q.pop();
        int a = p.first;
        int b = p.second;
        for(int i = 0; i < 4; i++){
            int nx = dx[i] + a;
            int ny = dy[i] + b;
            if(nx < 0 or ny < 0 or nx >= h or ny >= w){
                continue;
            }
            if(C[nx][ny] == '#') continue;
            if(D[nx][ny] > D[a][b] + 1){
                D[nx][ny] = D[a][b] + 1;
                if(nx == gx and ny == gy) continue;
                q.push({nx, ny});
            }
        }
    }

    if(D[gx][gy] != 1e9) cout << D[gx][gy] << endl;
    else cout << -1 << endl;

    return 0;
}