#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    long long A[n][n];
    bool F[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> A[i][j];
            F[i][j] = true;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){

                // Aには最短距離が示されているはずなのでダメ
                if(A[j][i] + A[i][k] < A[j][k]){
                    cout << -1 << endl;
                    return 0;
                }

                // i - k
                // | /
                // j
                // このとき j-kのパスはとりのぞきj-i i-kを生き残らせる
                //（多く生き残らせて存在する道路の長さの和を最小にするため）
                if(A[j][k] == A[j][i] + A[i][k] and i != j and i != k){
                    F[j][k] = false;
                }
            }
        }
    }

    long long ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(F[i][j]) ans += A[i][j];
        }
    }

    cout << ans << endl;

    return 0;
}