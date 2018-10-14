#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    string ans;
    ans = s[0] + to_string(s.size() - 2) + s[s.size() - 1];

    cout << ans << endl;

    return 0;
}