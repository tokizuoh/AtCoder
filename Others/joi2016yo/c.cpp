#include <bits/stdc++.h>
using namespace std;

const int MAX = 55;
int W[55][55];
int B[55][55];
int R[55][55];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h, w;
    cin >> h >> w;
    char C[h][w];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> C[i][j];
        }
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(C[i][j] == 'W') W[i + 1][j + 1]++;
            if(C[i][j] == 'B') B[i + 1][j + 1]++;
            if(C[i][j] == 'R') R[i + 1][j + 1]++;
        }
    }

    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            W[i][j] += W[i][j - 1];
            B[i][j] += B[i][j - 1];
            R[i][j] += R[i][j - 1];
        }
    }
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            W[i][j] += W[i - 1][j];
            B[i][j] += B[i - 1][j];
            R[i][j] += R[i - 1][j];
        }
    }

    int mini = 1e9;
    for(int i = 1; i <= h - 2; i++){
        for(int j = i + 1; j <= h - 1; j++){
            int wc = W[i][w] - W[0][w];
            int bc = B[j][w] - B[i][w];
            int rc = R[h][w] - R[j][w];

            int wn = i * w - wc;
            int bn = (j - i) * w - bc;
            int rn = (h - j) * w - rc;

            mini = min(mini, wn + bn + rn);
        }
    }

    cout << mini << endl;

    return 0;
}