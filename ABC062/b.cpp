#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h, w;
    cin >> h >> w;

    char A[h][w];
    REP(i, h) REP(j, w) cin >> A[i][j];

    REP(i, h + 2){
        REP(j, w + 2){
            if(i == 0 or j == 0 or i == h + 1 or j == w + 1){
                cout << "#";
            }else{
                cout << A[i - 1][j - 1];
            }
        }
        cout << endl; 
    }

    return 0;
}