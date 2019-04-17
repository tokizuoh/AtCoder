#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<long long> A(n), B(n);
    for(int i = 0; i < n; i++){
        cin >> A[i] >> B[i];
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    long long am = (n % 2 ? A[n / 2] : (A[n / 2 - 1] + A[n / 2]) / 2);
    long long bm = (n % 2 ? B[n / 2] : (B[n / 2 - 1] + B[n / 2]) / 2);

    long long ans = 0;
    for(int i = 0; i < n; i++){
        ans += B[i] - A[i];
        ans += abs(am - A[i]);
        ans += abs(bm - B[i]);
    }

    cout << ans << endl;

    return 0;
}