#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    vector<int> A(3);
    REP(i, 3) cin >> A[i];

    sort(A.begin(), A.end());

    int a, b;
    a = A[2] - A[1];
    b = A[2] - A[0];

    int ans = 0;
    if(a % 2 == b % 2){
        ans = (a + b) / 2;
    }else{
        ans = 1 + (a + b + 1) / 2;
    }

    cout << ans << endl;

    return 0;
}