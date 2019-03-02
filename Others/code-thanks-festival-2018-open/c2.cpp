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

    sort(A.begin(), A.end());

    long long ans = 0;
    for(int i = 0; i < n; i++){
        ans += -A[i] * (n - i - 1) + A[i] * i;
    }

    cout << ans << endl;

    return 0;
}