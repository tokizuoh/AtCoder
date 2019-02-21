#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m, ans = 0;
    cin >> n >> m;

    vector<int> A(m);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        if(a >= n) A[i] = 0;
        else A[i] = n - a;
    }

    sort(A.begin(), A.end());
    for(int i = 0; i < m - 1; i++){
        ans += A[i];
    }

    cout << ans << endl;

    return 0;
}