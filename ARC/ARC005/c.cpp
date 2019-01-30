#include <bits/stdc++.h>
using namespace std;

int h, w, sx, sy, gx, gy;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
const int MAX = 510;

char C[MAX][MAX];

bool f[MAX][MAX][3];

void dfs(int xx, int yy, int num){
    f[xx][yy][num] = true;
    for(int i = 0; i < 4; i++){
        int nx, ny;
        nx = dx[i] + xx;
        ny = dy[i] + yy;
        if(nx < 0 or ny < 0 or nx >= h or ny >= w or (C[nx][ny] == '#' and num == 2)){
            continue;
        }
        if(C[nx][ny] == '#'){
            if(!f[nx][ny][num + 1]) dfs(nx, ny, num + 1);
        }else{
            if(!f[nx][ny][num]) dfs(nx, ny, num);
        }
    }
    return;
}


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> h >> w;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> C[i][j];
            if(C[i][j] == 's'){
                sx = i; sy = j;
            }else if(C[i][j] == 'g'){
                gx = i; gy = j;
            }
        }
    }

    dfs(sx, sy, 0);

    if(f[gx][gy][0] or f[gx][gy][1] or f[gx][gy][2]){
        cout << "YES" << endl; 
    }else{
        cout << "NO" << endl;
    }

    return 0;
}