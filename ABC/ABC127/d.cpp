#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<long long> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    vector<long long> B(n + 1, 0);
    for(int i = 0; i < n; i++){
        B[i + 1] = B[i] + A[i];
    }

    for(int i = 0; i < m; i++){
        long long b, c;
        cin >> b >> c;
        int idx = lower_bound(A.begin(), A.end(), c) - A.begin();
        if(idx == 0) continue;
        cout << idx << endl;
        return 0;
        // else if(idx < n){

        // }

    }

    return 0;
}