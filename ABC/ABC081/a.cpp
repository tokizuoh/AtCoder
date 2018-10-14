#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;
    cout << (int)count(s.begin(), s.end(), '1') << endl;

    return 0;
}