#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int lim = sqrt(n);
    vector<int> A(n + 1, 1);
    A[0] = A[1] = 0;

    for(int i = 2; i <= lim; i++){
        if(A[i]){
            for(int j = i * 2; j <= n; j += i){
                A[j] = 0;       
            }
        }
    }

    if(A[n] == 1){
        cout << n << endl;
        return 0;
    }

    

    return 0;
}