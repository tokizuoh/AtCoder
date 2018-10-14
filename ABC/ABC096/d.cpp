#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    
    int lim = 55556;

    vector<bool> A(lim, true);
    A[0] = false;
    A[1] = false;
    
    for(int i = 2; i <= (int)(sqrt(lim)); i++){
        if(A[i]){
            for(int j = i * 2; j < lim; j += i){
                A[j] = false;
            }
        }
    }

    vector<int> B(n);
    int n_i = 0;
    for(int i = 2; i < lim; i++){
        if(A[i]){
            if(i % 5 == 1){
                B[n_i] = i;
                n_i++;
                if(n_i > n) break;
            }
        }
    }

    for(int i = 0; i < n; i++){
        if(i > 0) cout << " " << B[i]; 
        else cout << B[i];
    }
    cout << endl;

    return 0;
}