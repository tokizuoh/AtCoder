#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h, w;
    cin >> h >> w;
    char C[h][w];
    int A[h][w];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> C[i][j];
            A[i][j] = -1;
        }
    }

    for(int i = 0; i < h; i++){
        int b = -1;
        for(int j = 0; j < w; j++){
            if(C[i][j] == 'c'){
                b = 0;
                A[i][j] = b;
            }else if(C[i][j] == '.'){
                if(b >= 0){
                    b++;
                    A[i][j] = b;
                }
            }
        }
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(j > 0) cout << ' ';
            cout << A[i][j];
        }
        cout << endl;
    }

    return 0;
}