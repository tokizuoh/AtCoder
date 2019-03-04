#include <bits/stdc++.h>
using namespace std;

int A[200020], B[200020];

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> S(n), T(n);
    for(int i = 0; i < n; i++){
        cin >> S[i] >> T[i];
        A[S[i]]++;
        A[T[i] + 1]--;
        B[S[i]]++;
    }

    for(int i = 1; i <= n * 2 + 1; i++){
        B[i] += B[i - 1];
    }

    for(int i = 0; i < n; i++){
        int ans = B[T[i]] - B[S[i] - 1] - 1;
        cout << ans << endl;
    }

    return 0;
}