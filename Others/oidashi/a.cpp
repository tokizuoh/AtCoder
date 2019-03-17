#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int h, w, sx, sy, gx, gy;
    cin >> h >> w;
    
    char C[h][w];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> C[i][j];
            if(C[i][j] == 'S'){sx = i; sy = j;}
            if(C[i][j] == 'G'){gx = i; gy = j;}
        }
    }

    int D[h][w];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            D[i][j] = 1e9;
        }
    }
    D[sx][sy] = 0;

    queue<P> q;
    q.push({sx, sy});
    while(!q.empty()){
        P p = q.front();
        int x = p.first;
        int y = p.second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = dx[i] + x;
            int ny = dy[i] + y;
            if(nx < 0 or ny < 0 or nx >= h or ny >= w) continue;
            if(C[nx][ny] == '#') continue;
            if(D[nx][ny] > D[x][y] + 1){
                D[nx][ny] = D[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    int D2[h][w];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            D2[i][j] = 1e9;
        }
    }
    D2[gx][gy] = 0;

    q.push({gx, gy});
    while(!q.empty()){
        P p = q.front();
        int x = p.first;
        int y = p.second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = dx[i] + x;
            int ny = dy[i] + y;
            if(nx < 0 or ny < 0 or nx >= h or ny >= w) continue;
            if(C[nx][ny] == '#') continue;
            if(D2[nx][ny] > D2[x][y] + 1){
                D2[nx][ny] = D2[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    int maxi = -1e9;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(C[i][j] != '#') continue;
            int mmini = 1e9;
            for(int k = 0; k < 4; k++){
                int kx = i + dx[k];
                int ky = j + dy[k];
                if(kx < 0 or ky < 0 or kx >= h or ky >= w) continue;
                if(C[kx][ky] == '#') continue;
                //int mmini = 1e9;
                for(int l = 0; l < 4; l++){
                    if(k == l) continue;
                    int lx = i + dx[l];
                    int ly = j + dy[l];
                    if(lx < 0 or ly < 0 or lx >= h or ly >= w) continue;
                    if(C[lx][ly] == '#') continue;
                    //cout << D[kx][ky] + D[lx][ly] + 2 << endl;
                    if(D[kx][ky] == 1e9 or D2[lx][ly] == 1e9) continue;
                    //cout << kx << ' ' << ky << '|' << lx << ' ' << ly << '|' << D[kx][ky] + D2[lx][ly] + 2 << endl;
                    mmini = min(mmini, D[kx][ky] + D2[lx][ly] + 2);
                    //maxi = max(maxi, D[kx][ky] + D2[lx][ly] + 2);
                }
                //if(mmini != 1e9) maxi = max(maxi, mmini);
            }
            if(mmini != 1e9) maxi = max(maxi, mmini);
        }
    }
    cout << maxi << endl;

    /*
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(D[i][j] == 1e9) cout << "xx" << ' ';
            else cout << setfill('0') << right << setw(2) << D[i][j] << ' ';
        }
        cout << endl;
    }
    cout << "-----------------------------" << endl;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(D2[i][j] == 1e9) cout << "xx" << ' ';
            else cout << setfill('0') << right << setw(2) << D2[i][j] << ' ';
        }
        cout << endl;
    }
    */

    return 0;
}