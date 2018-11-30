#include <bits/stdc++.h>
using namespace std;

int h, w, sx, sy;
const int MAX_h = 510, MAX_w = 510;
char maze[MAX_h][MAX_w];
bool reached[MAX_h][MAX_w];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

bool DFS(int x, int y){
    if(maze[x][y] == 'g') return true;
    for(int i = 0; i < 4; i++){
        int nx, ny;
        nx = x + dx[i];
        ny = y + dy[i];
        if(nx < 0 or ny < 0 or nx >= h or ny >= w or maze[nx][ny] == '#' or reached[nx][ny]){
            continue;
        }
        reached[nx][ny] = true;
        if(DFS(nx, ny)) return true;
    }
    return false;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> h >> w;

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> maze[i][j];
            if(maze[i][j] == 's'){
                sx = i;
                sy = j;
            }
        }
    }

    cout << (DFS(sx, sy) ? "Yes" : "No") << endl;




    return 0;
}