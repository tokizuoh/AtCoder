#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int H, W;
    cin >> H >> W;
    int c[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cin >> c[i][j];
        }
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            for(int k = 0; k < 10; k++){
                c[j][k] = min(c[j][k], c[j][i] + c[i][k]);
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            int a;
            cin >> a;
            if(a == -1) continue;
            ans += c[a][1];
        }
    }

    cout << ans << endl;

    return 0;
}