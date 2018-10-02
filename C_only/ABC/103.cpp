#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, maxi = -1e9;
    cin >> n;
    vector<int> A(n);
    REP(i, n){
        cin >> A[i];
        maxi = max(maxi, A[i]);
    }

    vector<bool> F(maxi + 1, true);
    F[0] = F[1] = 0;
    for(int i = 2; i <= (int)(sqrt(maxi)); i++){
        if(F[i]){
            for(int j = i + i; j <= maxi; j += i){
                F[j] = false;
            }
        }
    }
    return 0;
}