#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int m, n;
    cin >> m >> n;
    int A[n][m];

    vector<pair<int, int>> P;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> A[i][j];
            if(A[i][j] == 1) P.push_back({i, j});
        }
    }

    int maxi = -1e9;
    int D[n][m];
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    for(int i = 0; i < P.size(); i++){
        queue<pair<int, int>> q;
        q.push({P[i].first, P[i].second});
        for(int j = 0; j < n; j++){
            for(int k = 0; k < m; k++){
                D[j][k] = 1e9;
            }
        }
        D[P[i].first][P[i].second] = 0;
        for(int j = 0; j < n; j++){
            for(int k = 0; k < m; k++){
                cout << D[j][k] << ' ';
            }
            cout << endl;
        }
        cout << "-----------" << endl;
        while(!q.empty()){
            pair<int, int> p = q.front();
            q.pop();
            int x, y;
            x = p.first;
            y = p.second;
            for(int j = 0; j < 4; j++){
                int nx, ny;
                nx = x + dx[j];
                ny = y + dy[j];
                if(nx < 0 or ny < 0 or nx >= n or ny >= m){
                    continue;
                }
                if(A[nx][ny] == 0) continue;
                if(D[nx][ny] > D[x][y] + 1){
                    D[ny][ny] = D[x][y] + 1;
                    maxi = max(maxi, D[x][y] + 1);
                    q.push({nx, ny});
                }
            }
        }
        for(int j = 0; j < n; j++){
            for(int k = 0; k < m; k++){
                cout << D[j][k] << ' ';
            }
            cout << endl;
        }
        cout << "*************" << endl;
    }

    cout << maxi << endl;

    return 0;
}