#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    cout << 700 + 100 * (int)count(s.begin(), s.end(), 'o') << endl;

    return 0;
}