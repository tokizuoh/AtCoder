#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    vector<int> A(3);
    REP(i, 3) cin >> A[i];

    sort(A.begin(), A.end());

    cout << A[0] + A[1] << endl;

    return 0;
}