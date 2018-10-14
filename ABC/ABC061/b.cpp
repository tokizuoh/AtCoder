#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> A(m);
    vector<int> B(n + 1, 0);
    REP(i, m){
        cin >> A[i].first >> A[i].second;
        B[A[i].first]++;
        B[A[i].second]++;
    }

    REP(i, n){
        cout << B[i + 1] << endl;
    }

    return 0;
}