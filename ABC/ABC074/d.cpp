#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    long long A[n][n];
    bool F[n][n];
    REP(i, n){
        REP(j, n){
            cin >> A[i][j];
            F[i][j] = true;
        }
    }

    REP(i, n){
        REP(j, n){
            REP(k, n){
                if(A[j][i] + A[i][k] < A[j][k]){
                    cout << -1 << endl;
                    return 0;
                }else if(A[j][i] + A[i][k] == A[j][k] and i != j and i != k){
                    F[j][k] = false;
                }
            }
        }
    }

    long long ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(F[i][j]) ans += A[i][j];
        }
        cout << endl;
    }

    cout << ans << endl;

    return 0;
}