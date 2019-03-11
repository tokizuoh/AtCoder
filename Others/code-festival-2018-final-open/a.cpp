#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<int> A(m), B(m), L(m);
    for(int i = 0; i < m; i++){
        cin >> A[i] >> B[i] >> L[i];
    }

    vector<vector<int>> X(n);
    for(int i = 0; i < m; i++){
        X[A[i] - 1].push_back(L[i]);
        X[B[i] - 1].push_back(L[i]);
    }

    for(int i = 0; i < n; i++){
        sort(X[i].begin(), X[i].end());
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < X[i].size(); j++){
            if(X[i][j] > 1270) break;
            int l = lower_bound(X[i].begin(), X[i].end(), 2540 - X[i][j]) - X[i].begin();
            int r = upper_bound(X[i].begin(), X[i].end(), 2540 - X[i][j]) - X[i].begin();
            if(X[i][j] == 1270){ans += (r - l) * (r - l - 1) / 2; break;}
            else ans += r - l;
        }
    }

    cout << ans << endl;

    return 0;
}