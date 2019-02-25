#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

const int MAX = 12;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
char C[MAX][MAX];
bool seen[MAX][MAX];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n = 10, total = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> C[i][j];
            if(C[i][j] == 'o') total++;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(C[i][j] == 'o') continue;

            C[i][j] = 'o';
            for(int k = 0; k < n; k++){
                for(int l = 0; l < n; l++){
                    seen[k][l] = false;
                }
            }
            seen[i][j] = true;
            
            int cnt = 0;
            
            queue<P> q;
            q.push({i, j});
            while(!q.empty()){
                P p = q.front();
                q.pop();
                int x, y;
                x = p.first;
                y = p.second;
                for(int k = 0; k < 4; k++){
                    int nx, ny;
                    nx = x + dx[k];
                    ny = y + dy[k];
                    if(nx < 0 or ny < 0 or nx >= n or ny >= n) continue;
                    if(!seen[nx][ny] and C[nx][ny] == 'o'){
                        cnt++;
                        seen[nx][ny] = true;
                        q.push({nx, ny});
                    }
                }
            }
            if(cnt == total){
                cout << "YES" << endl;
                return 0;
            }
            C[i][j] = 'x';
        }
    }

    cout << "NO" << endl;

    return 0;
}