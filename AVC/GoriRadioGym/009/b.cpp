#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, total = 0;
    cin >> n;
    vector<int> T(n);
    for(int i = 0; i < n; i++){
        cin >> T[i];
        total += T[i];
    }
    int m;
    cin >> m;
    vector<int> P(m), X(m);
    for(int i = 0; i < m; i++){
        cin >> P[i] >> X[i];
        P[i]--;
    }

    for(int i = 0; i < m; i++){
        cout << total - T[P[i]] + X[i] << endl;
    }

    return 0;
}