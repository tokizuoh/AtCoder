#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string S[3];
    REP(i, 3) cin >> S[i];

    cout << S[0][0] << S[1][1] << S[2][2] << endl;

    return 0;
}