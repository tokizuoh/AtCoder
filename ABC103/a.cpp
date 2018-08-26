#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    vector<int> A(3);
    REP(i, 3) cin >> A[i];

    sort(A.begin(), A.end());
    
    int cost = 0;
    REP(i, 2){
        cost += A[i + 1] - A[i];
    }
    cout << cost << endl;

    return 0;
}