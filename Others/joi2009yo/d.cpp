#include <bits/stdc++.h>
using namespace std;

const int MAX = 95;
int n, m, ans = 0;
int A[MAX][MAX];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void dfs(int x, int y, int d){
    ans = max(ans, d);
    for(int i = 0; i < 4; i++){
        int nx, ny;
        nx = x + dx[i];
        ny = y + dy[i];
        if(nx < 0 or ny < 0 or nx >= n or ny >= m){
            continue;
        }
        if(A[nx][ny] == 0) continue;
        A[nx][ny] = 0;
        dfs(nx, ny, d + 1);
        A[nx][ny] = 1;
    }
    return;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> m >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> A[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(A[i][j] == 0) continue;
            A[i][j] = 0;
            dfs(i, j, 1);
            A[i][j] = 1;
        }
    }

    cout << ans << endl;

    return 0;
}