#include <bits/stdc++.h>
using namespace std;
typedef pair<int, pair<int, int>> P;

const int H = 110;
const int W = 110;
const int INF = 1e9;
int D[H][W];
char C[H][W];
int h, w;
int dx[2][6] = {{-1, -1, 0, 0, 1, 1}, {-1, -1, 0, 0, 1, 1}};
int dy[2][6] = {{-1, 0, -1, 1, -1, 0}, {0, 1, -1, 1, 0, 1}};

void dijkstra(int x, int y){
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            D[i][j] = INF;
        }
    }
    D[x][y] = 0;
    priority_queue<P, vector<P>, greater<P>> q;
    q.push({0, {x, y}});
    while(!q.empty()){
        P p = q.top();
        q.pop();
        
        int cost, ix, iy;
        cost = p.first;
        ix = p.second.first;
        iy = p.second.second;

        for(int i = 0; i < 6; i++){
            int nx, ny;
            nx = ix + dx[ix % 2][i];
            ny = iy + dy[ix % 2][i];
            if(nx < 0 or ny < 0 or nx >= h or ny >= w) continue;
            if(D[nx][ny] > D[ix][iy] + cost){
                D[nx][ny] = D[ix][iy] + cost;
                if(C[nx][ny] == 't') continue;
                int ccost = (int)(C[nx][ny] - '0');
                q.push({ccost, {nx, ny}});
            }
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> h >> w;

    int sx, sy, gx, gy;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> C[i][j];
            if(C[i][j] == 's'){
                sx = i;
                sy = j;
            }
            if(C[i][j] == 't'){
                gx = i;
                gy = j;
            }
        }
    }

    dijkstra(sx, sy);

    cout << D[gx][gy] << endl;

    return 0;
}