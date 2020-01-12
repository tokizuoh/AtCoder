#include <bits/stdc++.h>
using namespace std;

int h, w;
char C[22][22];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
bool seen[22][22];

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);


    cin >> h >> w;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> C[i][j];
        }
    }

    int ans = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(C[i][j] == '#'){
                continue;
            }
            int D[h][w];
            for(int k = 0; k < h; k++){
                for(int k2 = 0; k2 < w; k2++){
                    D[k][k2] = 1e9;
                }
            }
            D[i][j] = 0;

            queue<pair<int, int>> q;
            q.push(make_pair(i, j));
            int mama = 0;
            while(!q.empty()){
                pair<int, int> t = q.front();
                q.pop();
                for(int i = 0; i < 4; i++){
                    int nx, ny;
                    nx = t.first + dx[i];
                    ny = t.second + dy[i];
                    if(nx < 0 or ny < 0 or nx >= h or ny >= w){
                        continue;
                    }
                    if(C[nx][ny] == '#'){
                        continue;
                    }
                    if(D[t.first][t.second] + 1 < D[nx][ny]){
                        D[nx][ny] = D[t.first][t.second] + 1;
                        mama = max(mama, D[nx][ny]);
                        q.push({nx, ny});
                    }
                }
            }
            ans = max(ans, mama);
        }
    }

    cout << ans << endl;

    return 0;
}