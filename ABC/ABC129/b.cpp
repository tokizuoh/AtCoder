#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    vector<int> B(n + 1, 0);
    for(int i = 0; i < n; i++){
        B[i + 1] = A[i] + B[i];
    }

    int ans = 1e9;
    for(int i = 0; i < n; i++){
        ans = min(ans, abs(B[n]-B[i + 1]-B[i + 1]));
    }

    cout << ans << endl;

    return 0;
}