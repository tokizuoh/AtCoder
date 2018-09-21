#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<long long> L(n + 1);
    L[0] = 2;
    L[1] = 1;
    for(int i = 2; i <= n; i++){
        L[i] = L[i - 1] + L[i - 2];
    }

    cout << L[n] << endl;

    return 0;
}