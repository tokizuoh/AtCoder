#include <bits/stdc++.h>
using namespace std;

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

    for(int i = 0; i < h + 2; i++){
        for(int j = 0; j < w + 2; j++){
            if(i == 0 or j == 0 or i == h + 1 or j == w + 1){
                cout << '#';
            }else{
                cout << C[i - 1][j - 1];
            }
        }
        cout << endl;
    }

    return 0;
}