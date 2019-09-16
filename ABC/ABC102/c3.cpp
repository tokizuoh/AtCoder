#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long n;
    cin >> n;
    vector<long long> A(n);
    for(long long i = 0; i < n; i++){
        cin >> A[i];
        A[i] -= i + 1;
    }

    sort(A.begin(), A.end());

    long long mid = (n % 2 ? A[n / 2] : (A[n / 2] + A[n / 2 - 1]) / 2);
    long long ans = 0;
    for(long long i = 0; i < n; i++){
        ans += abs(A[i] - mid);
    }

    cout << ans << endl;

    return 0;
}