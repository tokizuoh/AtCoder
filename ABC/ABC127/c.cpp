#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, m, maxi = -1;
    cin >> n >> m;

    vector<int> A(100010, 0);
    for(int i = 0; i < m; i++){
        int l, r;
        cin >> l >> r;
        A[l]++;
        A[r + 1]--;
        maxi = max(maxi, r + 1);
    }

    int ans = 0;
    for(int i = 0; i <= maxi; i++){
        if(i > 0) A[i] += A[i - 1];
        if(A[i] == m) ans++;
    }

    cout << ans << endl;

    return 0;
}