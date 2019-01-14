#include <bits/stdc++.h>
using namespace std;

int h, w;
vector<string> S;

const int MAXI = 410;
long long black, white;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

bool seen[MAXI][MAXI];

void dfs(int x, int y){
    seen[x][y] = true;
    if(S[x][y] == '#') black++;
    else white++;
    
    for(int i = 0; i < 4; i++){
        int nx, ny;
        nx = x + dx[i];
        ny = y + dy[i];
        if(nx < 0 or ny < 0 or nx >= h or ny >= w){
            continue;
        }
        if(S[x][y] == S[nx][ny]){
            continue;
        }
        if(seen[nx][ny]){
            continue;
        }
        dfs(nx, ny);
    }

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> h >> w;
    S.resize(h);

    for(int i = 0; i < h; i++){
        cin >> S[i];
    }

    long long ans = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(S[i][j] == '.') continue;
            if(seen[i][j]) continue;
            black = 0, white = 0;
            dfs(i, j);
            ans += black * white;
        }
    }

    cout << ans << endl;

    return 0;
}