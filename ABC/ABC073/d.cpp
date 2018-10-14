#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m, r;
    cin >> n >> m >> r;

    vector<int> R(r);
    REP(i, r){
        cin >> R[i];
        R[i]--;
    }
    sort(R.begin(), R.end());

    int A[n][n] = {};
    REP(i, n){
        REP(j, n){
            if(i != j) A[i][j] = 1e9;
        }
    }

    REP(i, m){
        int a, b, c;
        cin >>  a >> b >> c;
        a--; b--;
        A[a][b] = c;
        A[b][a] = c;
    }

    REP(i, n){
        REP(j, n){
            REP(k, n){
                A[j][k] = min(A[j][k], A[j][i] + A[i][k]);
            }
        }
    }

    int ans = 1e9;
    do{
        int cost = 0;
        REP(i, r - 1){
            cost += A[R[i]][R[i + 1]];
        }
        ans = min(ans, cost);
    }while(next_permutation(R.begin(), R.end()));

    cout << ans << endl; 

    return 0;
}