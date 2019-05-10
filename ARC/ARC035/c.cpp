#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long n, m;
    cin >> n >> m;
    
    long long G[n][n];
    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < n; j++){
            G[i][j] = (i == j ? 0 : 1e9);
        }
    }

    for(long long i = 0; i < m; i++){
        long long a, b, c;
        cin >> a >> b >> c;
        a--; b--;
        G[a][b] = c;
        G[b][a] = c;
    }

    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < n; j++){
            for(long long k = 0; k < n; k++){
                G[j][k] = min(G[j][k], G[j][i] + G[i][k]);
            }
        }
    }

    long long l;
    cin >> l;
    while(l--){
        long long x, y, z;
        cin >> x >> y >> z;
        x--; y--;
        if(x > y) swap(x, y);
        for(long long i = 0; i < n; i++){
            for(long long j = 0; j < n; j++){
                G[i][j] = min(G[i][j], min(G[i][x] + G[y][j] + z, G[i][y] + G[x][j] + z));
            }
        }
        long long s = 0;
        for(long long i = 0; i < n; i++){
            for(long long j = i + 1; j < n; j++){
                s += G[i][j];
            }
        }
        cout << s << endl;
    }

    return 0;
}