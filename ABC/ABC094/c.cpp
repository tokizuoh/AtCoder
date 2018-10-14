#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> X(n), Y(n);
    REP(i, n){
        cin >> X[i];
        Y[i] = X[i];
    }

    sort(Y.begin(), Y.end());
    REP(i, n){
        int idx = lower_bound(Y.begin(), Y.end(), X[i]) - Y.begin();
        cout << Y[(idx < n / 2 ? n / 2 : n / 2 - 1)] << endl;
    }

    return 0;
}
