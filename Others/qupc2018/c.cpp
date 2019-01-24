#include <bits/stdc++.h>
using namespace std;

const int MAX = 1010;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h, w, x, gx, gy;
    cin >> h >> w >> x;

    // q1 -> boar
    // q2 -> normal BFS
    queue<pair<int, int>> q1, q2;

    bool BF[MAX][MAX];
    int BD[MAX][MAX];
    int D[MAX][MAX];
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            BF[i][j] = false;
            BD[i][j] = 1e9;
            D[i][j] = 1e9;
        }
    }
    
    vector<pair<int, int>> B;

    char C[MAX][MAX];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> C[i][j];
            if(C[i][j] == 'S'){
                D[i][j] = 0;
                q2.push({i, j});
            }else if(C[i][j] == '@'){
                B.push_back({i, j});
            }else if(C[i][j] == 'G'){
                gx = i;
                gy = j;
            }
        }
    }

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    for(int i = 0; i < B.size(); i++){
        q1.push({B[i].first, B[i].second});
        BD[B[i].first][B[i].second] = 0;
        BF[B[i].first][B[i].second] = true;
        while(!q1.empty()){
            pair<int, int> p = q1.front();
            q1.pop();
            for(int j = 0; j < 4; j++){
                int nx, ny;
                nx = p.first + dx[j];
                nx = p.second + dy[j];
                if(nx < 0 or ny < 0 or nx >= h or ny >= w){
                    continue;
                }
                if(C[nx][ny] == '#' or C[nx][ny] == '@'){
                    continue;
                }
                if((BD[p.first][p.second] + 1 < BD[nx][ny]) && (BD[p.first][p.second] + 1 <= x)){
                    BD[nx][ny] = BD[p.first][p.second] + 1;
                    BF[nx][ny] = true;
                    q1.push({nx, ny});
                }
            }
        }
    }

    while(!q2.empty()){
        pair<int, int> t = q2.front();
        q2.pop();
        for(int i = 0; i < 4; i++){
            int nx, ny;
            nx = t.first + dx[i];
            ny = t.second + dy[i];
            if(nx < 0 or ny < 0 or nx >= h or ny >= w){
                continue;
            }
            if((C[nx][ny] == '#')||(BF[nx][ny])){
                continue;
            }
            if(D[t.first][t.second] + 1 < D[nx][ny]){
                D[nx][ny] = D[t.first][t.second] + 1;
                q2.push({nx, ny});
            }
        }
    }

    if(D[gx][gy] == 1e9){
        cout << -1 << endl;
    }else{
        cout << D[gx][gy] << endl;
    }

    return 0;
}