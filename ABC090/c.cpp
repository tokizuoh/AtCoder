#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

//シミュレーション用
void check(int a, int b){
    int A[a][b] = {};
    int dx[9] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
    int dy[9] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
    REP(i, a){
        REP(j, b){
            REP(k, 9){
                int nx, ny;
                nx = i + dx[k];
                ny = j + dy[k];
                if(nx < 0 or ny < 0 or nx >= a or ny >= b) continue;
                A[nx][ny]++;
            }
        }
    }
    REP(i, a){
        REP(j, b){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long n, m;
    cin >> n >> m;

    long long ans;
    if(n == 1 or m == 1){
        ans = max(1LL, max(n, m) - 2LL);
    }else{
        ans = (n - 2) * (m - 2);
    }
    cout << ans << endl;

    return 0;
}