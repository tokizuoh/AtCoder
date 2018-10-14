#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int q, maxi = -1e9;
    cin >> q;
    vector<int> L(q), R(q);
    for(int i = 0; i < q; i++){
        cin >> L[i] >> R[i];
        maxi = max(maxi, R[i]);
    }

    vector<bool> F(maxi + 1, true);
    F[0] = false;
    F[1] = false;
    F[maxi + 1] = 0;
    for(int i = 2; i <= sqrt(maxi); i++){
        if(F[i] == true){
            for(int j = i + i; j <= maxi; j += i){
                F[j] = false;
            }
        }
    }

    vector<int> S(maxi + 2, 0);
    for(int i = 3; i <= maxi; i += 2){
        if(F[i] == true and F[(i + 1) / 2] == true){
            S[i] = 1;
        }
    }

    for(int i = 1; i < maxi + 1; i++){
        S[i] += S[i - 1];
    }

    for(int i = 0; i < q; i++){
        cout << S[R[i]] - S[L[i] - 1] << endl;
    }

    return 0;
}