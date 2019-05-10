#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, d;
    cin >> n >> d;

    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    long long ans = 0;
    for(int i = 0; i < n - 2; i++){
        int idx = upper_bound(A.begin(), A.end(), A[i] + d) - A.begin();
        long long l = idx - i - 1;
        ans += l * (l - 1) / 2;
    }

    cout << ans << endl;

    return 0;
}