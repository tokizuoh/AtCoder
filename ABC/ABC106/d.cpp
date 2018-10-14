#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m, q;
    cin >> n >> m >> q;

    int A[n + 2][n + 2] = {};
    REP(i, m){
        int l, r;
        cin >> l >> r;
        A[l][r + 1]++;
    }

    REP(i, n + 2){
        REP(j, n + 2){
            if(i) A[i][j] += A[i - 1][j];
        }
    }

    REP(i, n + 2){
        REP(j, n + 2){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}