#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

int h, w, n, sx, sy;
const int MAX = 1010;
int X[10], Y[10];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
char C[MAX][MAX];
int D[MAX][MAX];

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    cin >> h >> w >> n;

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> C[i][j];
            char t = C[i][j];
            if(t == 'S'){
                sx = i; sy = j;
                continue;
            }
            if(t != 'S' and t != '.' and t != 'X'){
                int idx = (int)(t - '1');
                X[idx] = i; Y[idx] = j;
                continue;
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        queue<P> q;
        q.push({sx, sy});
        for(int j = 0; j < h; j++){
            for(int k = 0; k < w; k++){
                D[j][k] = 1e9;
            }
        }
        D[sx][sy] = 0;

        while(!q.empty()){
            P p = q.front();
            q.pop();
            for(int j = 0; j < 4; j++){
                int nx, ny;
                nx = dx[j] + p.first;
                ny = dy[j] + p.second;
                if(nx < 0 or ny < 0 or nx >= h or ny >= w) continue;
                if(C[nx][ny] == 'X') continue;
                if(D[nx][ny] > D[p.first][p.second] + 1){
                    D[nx][ny] = D[p.first][p.second] + 1;
                    if(nx == X[i] and ny == Y[i]) continue;
                    q.push({nx, ny});
                }
            }
        }
        ans += D[X[i]][Y[i]];
        sx = X[i]; sy = Y[i];
    }

    cout << ans << endl;

    return 0;
}