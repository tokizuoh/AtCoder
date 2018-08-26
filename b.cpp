#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h, w;
    cin >> h >> w;

    char A[h][w];
    REP(i, h){
        REP(j, w){
            cin >> A[i][j];
        }
    }

    set<int> y, x;
    REP(i, h){
        REP(j, w){
            if(A[i][j] == '#'){
                y.insert(i);
                x.insert(j);
            }
        }
    }

    for(auto i : y){
        for(auto j : x){
            cout << A[i][j];
        }
        cout << endl;
    }

    return 0;
}