#include <bits/stdc++.h>
using namespace std;
typedef pair<pair<int, int>, int> P;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int h, w;
    cin >> h >> w;
    
    queue<P> q;
    
    char C[h][w];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> C[i][j];
            if(C[i][j] == '#'){
                q.push({{i, j}, 1});
            }
        }
    }

    int ans = 0;
    while(!q.empty()){
        P p = q.front();
        q.pop();
        int x = p.first.first;
        int y = p.first.second;
        int c = p.second;

        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 or ny < 0 or nx >= h or ny >= w){
                continue;
            }
            if(C[nx][ny] == '#'){
                continue;
            }
            C[nx][ny] = '#';
            q.push({{nx, ny}, c + 1});
            ans = max(ans, c);
        }
    }

    cout << ans << endl;

    return 0;
}