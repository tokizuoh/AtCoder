#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<long long> X(m);
    for(int i = 0; i < m; i++){
        cin >> X[i];
    }

    sort(X.begin(), X.end());

    vector<long long> A(m, 0);

    for(int i = 1; i < m; i++){
        A[i] = X[i] - X[i - 1];
    }

    sort(A.begin(), A.end());

    long long ans = 0;
    for(int i = 0; i < m - n + 1; i++){
        ans += A[i];
    }

    cout << ans << endl;

    return 0;
}