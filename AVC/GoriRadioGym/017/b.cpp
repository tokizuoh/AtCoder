#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<int> A(n), B(n);
    for(int i = 0; i < n; i++){
        cin >> A[i] >> B[i];
    }
    vector<int> C(m), D(m);
    for(int i = 0; i < m; i++){
        cin >> C[i] >> D[i];
    }

    for(int i = 0; i < n; i++){
        int mini = 1e9, p;
        for(int j = 0; j < m; j++){
            int cost = abs(A[i] - C[j]) + abs(B[i] - D[j]);
            if(mini > cost){
                p = j + 1;
                mini = cost;
            }
        }
        cout << p << endl; 
    }

    return 0;
}