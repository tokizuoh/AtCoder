#include <bits/stdc++.h>
using namespace std;

const int N = 2010;
char C[N][N];
int A[N][N];
int B[N][N];
int X[N][N];
int Y[N][N];

int h, w;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    cin >> h >> w;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> C[i][j];
        }
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(C[i][j] == '#') A[i][j] = 0;
            else{
                if(j > 0) A[i][j] = A[i][j - 1] + 1;
                else A[i][j] = 1;
            }
        }
    }

    for(int i = 0; i < h; i++){
        for(int j = w - 1; j >= 0; j--){
            if(C[i][j] == '#') B[i][j] = 0;
            else{
                if(j < w - 1) B[i][j] = B[i][j + 1] + 1;
                else B[i][j] = 1;
            }
        }
    }

    for(int i = 0; i < w; i++){
        for(int j = 0; j < h; j++){
            if(C[j][i] == '#') X[j][i] = 0;
            else{
                if(j > 0) X[j][i] = X[j - 1][i] + 1;
                else X[j][i] = 1;
            }
        }
    }
        
    for(int i = 0; i < w; i++){
        for(int j = h - 1; j >= 0; j--){
            if(C[j][i] == '#') Y[j][i] = 0;
            else{
                if(j < h - 1) Y[j][i] = Y[j + 1][i] + 1;
                else Y[j][i] = 1;
            }
        }
    }

    /*
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cout << Y[i][j] << ' ';
        }
        cout << endl;
    }
    */
    
    int ans = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(C[i][j] == '#') continue;
            int cnt = 1;
            if(j != 0 and j != w - 1){
                cnt += A[i][j - 1] + B[i][j + 1];
            }else if(j == 0 and j != w - 1){
                cnt += B[i][j + 1];
            }else if(j != 0 and j == w - 1){
                cnt += A[i][j - 1];
            }
            if(i != 0 and i != h - 1){
                cnt += X[i - 1][j] + Y [i + 1][j];
            }else if(i == 0 and i != h - 1){
                cnt += Y[i + 1][j];
            }else if(i != 0 and i == h - 1){
                cnt += X[i - 1][j];
            }
            ans = max(ans, cnt);
        }
    }

    cout << ans  << endl;

    return 0;
}