#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> V(n), C(n);
    for(int i = 0; i < n; i++){
        cin >> V[i];
    }
    for(int i = 0; i < n; i++){
        cin >> C[i];
    }

    vector<int> A(n);
    for(int i = 0; i < n; i++){
        A[i] = V[i] - C[i];
    }

    sort(A.rbegin(), A.rend());

    int ans = 0;
    for(int i = 0; i < n; i++){
        if(A[i] > 0) ans += A[i];
    }

    cout << ans << endl;

    return 0;
}