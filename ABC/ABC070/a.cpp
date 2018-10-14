#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string n;
    cin >> n;

    cout << (n[0] == n[2] ? "Yes" : "No") << endl;

    return 0;
}