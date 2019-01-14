#include <bits/stdc++.h>
using namespace std;

int h, w;
long long bl = 0, wh = 0;
const int MAXI = 410;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

vector<string> S;

bool seen[MAXI][MAXI];

void dfs(int x, int y){
    
    // 到達済みにする
    seen[x][y] = true;
    
    // カウント(*)
    if(S[x][y] == '#') bl++;
    else wh++;
    
    // いけるとこまでいく
    for(int i = 0; i < 4; i++){
        int nx, ny;
        nx = x + dx[i];
        ny = y + dy[i];

        // ありえんところ
        if(nx < 0 or ny < 0 or nx >= h or ny >= w){
            continue;
        }
        
        // 移動前と同じ色 or 到達済み
        if(S[x][y] == S[nx][ny] or seen[nx][ny]){
            continue;
        }

        // (*)を[nx][ny]としてここに書いていたが，
        // 黒白のみのときにカウントされない(2ペア以降からのカウントになる)
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
            if(S[i][j] == '.'){
                continue;
            }
            bl = 0, wh = 0;
            dfs(i, j);
            ans += bl * wh;
        }
    }

    cout << ans << endl;

    return 0;
}