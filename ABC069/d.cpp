#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h, w, n;
    cin >> h >> w;
    cin >> n;
    vector<int> A(n);
    REP(i, n) cin >> A[i];

    int C[h][w] = {};

    bool f = true;
    int idx = 0;
    REP(i, h){
        if(f){
            REP(j, w){
                C[i][j] = idx + 1;
                A[idx]--;
                if(A[idx] == 0){
                    idx++;
                }
            }
            f = false;
        }else{
            for(int j = w - 1; j >= 0; j--){
                C[i][j] = idx + 1;
                A[idx]--;
                if(A[idx] == 0){
                    idx++;
                }         
            }
            f = true;
        }
    }

    REP(i, h){
        REP(j, w){
            if(j) cout << " ";
            cout << C[i][j];
        }
        cout << endl;
    }

    return 0;
}