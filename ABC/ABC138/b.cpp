#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<double> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    double t = 0;
    for(int i = 0; i < n; i++){
        t += 1 / A[i];
    }

    double ans = 1 / t;
    cout << fixed << std::setprecision(10) << ans << endl;

    return 0;
}