#include <bits/stdc++.h>
using namespace std;
typedef pair<long long, pair<long long, long long>> P;

long long dx[4] = {-1, 1, 0, 0};
long long dy[4] = {0, 0, -1, 1};

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long h, w, t, sx, sy, gx, gy;
    cin >> h >> w >> t;
    char C[h][w];
    long long D[h][w];
    for(long long i = 0; i < h; i++){
        for(long long j = 0; j < w; j++){
            cin >> C[i][j];
            if(C[i][j] == 'S'){
                sx = i; sy = j;
            }
            if(C[i][j] == 'G'){
                gx = i; gy = j;
            }
        }
    }

    long long ok = 1, ng= 1e9, maxi = 1;
    while(ng - ok > 1){

        long long mid = (ok + ng) / 2;

        for(long long i = 0; i < h; i++){
            for(long long j = 0; j < w; j++){
                D[i][j] = 1e18;
            }
        }
        D[sx][sy] = 0;
        
        priority_queue<P, vector<P>, greater<P>> q;
        q.push({0, {sx, sy}});
        while(!q.empty()){
            P p = q.top();
            q.pop();
            long long x = p.second.first;
            long long y = p.second.second;
            for(long long i = 0; i < 4; i++){
                long long nx = dx[i] + x;
                long long ny = dy[i] + y;
                if(nx < 0 or ny < 0 or nx >= h or ny >= w) continue;
                if(C[nx][ny] == '#'){
                    if(D[nx][ny] > D[x][y] + mid){
                        D[nx][ny] = D[x][y] + mid;
                        q.push({D[nx][ny], {nx, ny}});
                    }
                    continue;
                }else if(D[nx][ny] > D[x][y] + 1){
                    D[nx][ny] = D[x][y] + 1;
                    if(C[nx][ny] == '.'){
                        q.push({D[nx][ny], {nx, ny}});
                    }
                }
            }
        }
        if(D[gx][gy] <= t){
            maxi = max(maxi, mid);
            ok = mid;
        }else{
            ng = mid;
        }
        //cout << ok << ' ' << ng << ' ' << D[gx][gy] << endl;
    }
    cout << maxi << endl;


    return 0;
}