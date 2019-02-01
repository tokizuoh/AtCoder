#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<long long> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    for(int i = 1; i < n; i++){
        A[i] += A[i - 1];
    }

    long long ans = 1e18;
    for(int i = 0; i < n - 1; i++){
        ans = min(ans, abs(A[n - 1] - 2 * A[i]));
    }

    cout << ans << endl;

    return 0;
}