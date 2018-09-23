#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int q;
    cin >> q;
    vector<int> L(q), R(q);
    
    int r_max = 0;
    REP(i, q){
        cin >> L[i] >> R[i];
        r_max = max(r_max, R[i]);
    }

    vector<int> A(r_max + 1, 1);
    A[0] = A[1] = 0;
    int lim = sqrt(r_max);
    for(int i = 2; i <= lim; i++){
        if(A[i]){
            for(int j = i * 2; j <= r_max; j += i){
                A[j] = 0;
            }
        }
    }

    vector<int> B(r_max + 1, 0);
    for(int i = 2; i <= r_max; i++){
        if(A[i] and A[(i + 1) / 2]){
            B[i] = 1;
        }
    }

    for(int i = 2; i <= r_max; i++){
        B[i] += B[i - 1];
    }

    REP(i, q){
        cout << B[R[i]] - B[L[i] - 1] << endl;
    }

    return 0;
}