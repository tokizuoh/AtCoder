#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m, d;
    cin >> n >> m >> d;
    char C[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> C[i][j];
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        int t = 0;
        for(int j = 0; j < m; j++){
            if(C[i][j] == '.') t++;
            else{
                ans += max(0, t - d + 1);
                t = 0;
            }
            if(j == m - 1){
                ans += max(0, t - d + 1);
            }
        }
    }
    for(int i = 0; i < m; i++){
        int t = 0;
        for(int j = 0; j < n; j++){
            if(C[j][i] == '.') t++;
            else{
                ans += max(0, t - d + 1);
                t = 0;
            }
            if(j == n - 1){
                ans += max(0, t - d + 1);
            }
        }
    }

    cout << ans << endl;

    return 0;
}