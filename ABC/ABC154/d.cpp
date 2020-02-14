#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    vector<double> A(n), B(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
        B[i] = A[i] * (A[i] + 1) / 2 / A[i];
    }

    vector<double> C(n + 1, 0.0);
    for(int i = 0; i < n; i++){
        C[i + 1] = C[i] + B[i];
    }

    double ans = 0.0;
    for(int i = k; i <= n; i++){
        ans = max(ans, C[i] - C[i - k]);
    }

    cout << fixed << setprecision(15) << ans << endl;

    return 0;
}