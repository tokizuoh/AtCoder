#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h, w;
    cin >> h >> w;
    string C[h];
    for(int i = 0; i < h; i++){
        cin >> C[i];
    }

    for(int i = 0; i < h; i++){
        for(int k = 0; k < 2; k++){
            for(int j = 0; j < w; j++){
                cout << C[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}