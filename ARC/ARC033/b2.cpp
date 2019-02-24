#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    int c = 0;
    for(int i = 0; i < m; i++){
        int b;
        cin >> b;
        int idx = lower_bound(A.begin(), A.end(), b) - A.begin();
        if(idx > n) continue;
        if(A[idx] == b) c++;
    }

    double ans = double(c) / double(n + m - c);
    cout << ans << endl;

    return 0;
}