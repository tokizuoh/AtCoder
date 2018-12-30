#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h, w, black = 0;
    cin >> h >> w;

    int D[h][w];
    vector<string> S(h);
    for(int i = 0; i < h; i++){
        cin >> S[i];
        for(int j = 0; j < w; j++){
            black += (S[i][j] == '#');
            D[i][j] = 1e9;
        }
    }

    D[0][0] = 1;
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    queue<pair<int, int>> q;
    q.push({0, 0});
    while(!(q.empty())){
        pair<int, int> tmp = q.front();
        q.pop();
        int x = tmp.first;
        int y = tmp.second;
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 or ny < 0 or nx >= h or ny >= w){
                continue;
            }
            if(S[nx][ny] == '.' and D[x][y] + 1 < D[nx][ny]){
                D[nx][ny] = D[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    if(D[h - 1][w - 1] == 1e9){
        cout << -1 << endl;
    }else{
        cout << h * w - (black + D[h - 1][w - 1]) << endl;
    }


    return 0;
}