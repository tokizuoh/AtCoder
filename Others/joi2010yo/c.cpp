#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    int A[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            A[i][j] = (i == j ? 0 : 1e9);
        }
    }

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        A[a][b] = 1;
        A[b][a] = 1;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                A[j][k] = min(A[j][k], A[j][i] + A[i][k]); 
            }
        }
    }

    int ans = 0;
    for(int i = 1; i < n; i++){
        ans += (A[0][i] <= 2);
    }

    cout << ans << endl;

    return 0;
}