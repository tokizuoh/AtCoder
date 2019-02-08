#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    for(int i = 1; i <= m; i++){
        for(int j = 0; j < n; j++){
            if(j == n - 1);
            else{
                if(A[j] % i > A[j + 1] % i){
                    swap(A[j], A[j + 1]);
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << A[i] << endl;
    }

    return 0;
}