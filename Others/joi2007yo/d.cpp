#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    int m;
    cin >> m;

    int A[2][n * 2];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < n * 2; j++){
            A[i][j] = j;
        }
    }
    for(int i = 0; i < m; i++){
        int k;
        cin >> k;
        if(k == 0){
            int idx = 0;
            bool f = true;
            for(int j = 0; j < n * 2; j++){
                if(j < n){
                    A[1 - (i % 2)][idx] = A[i % 2][j];
                }else{
                    if(f){
                        idx = 1;
                        f = false;
                    }
                    A[1 - (i % 2)][idx] = A[i % 2][j];
                }
                idx += 2;
            }
        }else{
            for(int j = 0; j < k; j++){
                A[1 - (i % 2)][j + 2 * n - k] = A[i % 2][j];
            }
            for(int j = k; j < n * 2; j++){
                A[1 - (i % 2)][j - k] = A[i % 2][j];                
            }
        }
    }

    for(int i = 0; i < n * 2; i++){
        cout << A[m % 2][i] + 1 << endl;
    }

    return 0;
}