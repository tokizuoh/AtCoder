#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long h, w;
    cin >> h >> w;
    long long c[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cin >> c[i][j];
        }
    }

    long long a[h][w];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            for(int k = 0; k < 10; k++){
                c[j][k] = min(c[j][k], c[j][i] + c[i][k]);
            }
        }
    }

    long long ans = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(a[i][j] == -1) continue;
            ans += c[a[i][j]][1];
        }
    }

    /*
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout << c[i][j] << ' ';
        }
        cout << endl;
    }
    */

    cout << ans << endl;

    return 0;
}