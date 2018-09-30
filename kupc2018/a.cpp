#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> S(n), A(n);
    REP(i, n) cin >> S[i];
    REP(i, n) cin >> A[i];
    
    int maxi = -1e9;
    REP(i, n){
        maxi = max(maxi, S[i] * A[i]);
    }

    cout << maxi << endl;

    return 0;
}