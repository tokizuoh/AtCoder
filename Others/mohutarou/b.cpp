#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int q, max_r = -1e9;
    cin >> q;
    vector<int> L(q), R(q);
    for(int i = 0; i < q; i++){
        cin >> L[i] >> R[i];
        max_r = max(max_r, R[i]);
    }

    // 念のため
    max_r += 10;

    vector<bool> F(max_r, true);
    F[0] = false;
    F[1] = false;
    for(int i = 2; i < (int)(sqrt(max_r)); i++){
        if(F[i] == true){
            for(int j = i + i; j < max_r; j += i){
                F[j] = false;
            }
        }
    }

    vector<int> A(max_r, 0);
    for(int i = 3; i < max_r; i += 2){
        if(F[i] && F[(i + 1) / 2]){
            A[i]++;
        }
    }

    for(int i = 3; i < max_r; i++){
        A[i] += A[i - 1];
    }

    for(int i = 0; i < q; i++){
        cout << A[R[i]] - A[L[i] - 1] << endl;
    }

    return 0;
}