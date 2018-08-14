#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector<int> A(m), B(m);
    REP(i, m){
        int a, b;
        cin >> a >> b;
        a--; b--;
        A[i] = a;
        B[i] = b;
    }

    int cnt = 0;
    REP(i, m){
        int D[n + 1][n + 1];
        REP(j, n){
            REP(k, n){
                D[j][k] = (j == k ? 0 : 1e9);
            }
        }

        REP(j, m){
            if(i == j) continue;
            D[A[j]][B[j]] = 1;
            D[B[j]][A[j]] = 1;
        }

        REP(j, n){
            REP(k, n){
                REP(l, n){
                    D[k][l] = min(D[k][l], D[k][j] + D[j][l]);
                }
            }
        }

        bool f = false;
        REP(j, n){
            REP(k, n){
                if(D[j][k] == 1e9){
                    cnt++;
                    f = true;
                    break;
                }
            }
            if(f) break;
        }
    }
    cout << cnt << endl;

    return 0;
}