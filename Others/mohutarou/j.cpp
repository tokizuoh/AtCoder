#include <bits/stdc++.h>
using namespace std;

const int NN_MAX = 2510;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    int D[n + 1][n + 1] = {};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int d;
            cin >> d;
            D[i + 1][j + 1] = d;
        }
    }

    for(int i = 0; i < n + 1; i++){
        for(int j = 0; j < n + 1; j++){
            if(i > 0) D[i][j] += D[i - 1][j];
        }
    }
    for(int i = 0; i < n + 1; i++){
        for(int j = 0; j < n + 1; j++){
            if(j > 0) D[i][j] += D[i][j - 1];
        }
    }

    int T[NN_MAX];
    for(int i = 0; i < NN_MAX; i++){
        T[i] = -1e9;
    }

    for(int a = 1; a < n + 1; a++){
        for(int b = 1; b < n + 1; b++){
            for(int c = a; c < n + 1; c++){
                for(int d = b; d < n + 1; d++){
                    int idx = (c - a + 1) * (d - b + 1);
                    int x = D[d][a - 1];
                    int y = D[b - 1][c];
                    int z = D[b - 1][a - 1];
                    T[idx] = max(T[idx], D[d][c] - x - y + z);
                }
            }
        }
    }

    for(int i = 1; i < n * n + 1; i++){
        T[i] = max(T[i], T[i - 1]);
    }

    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int p;
        cin >> p;
        cout << T[p] << endl;
    }


    /*
    for(int i = 0; i < n + 1; i++){
        for(int j = 0; j < n + 1; j++){
            cout << D[i][j] << ' ';
        }
        cout << endl;
    }
    */

    return 0;
}