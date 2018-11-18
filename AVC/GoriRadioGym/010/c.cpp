#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;

    string ans = "";
    ans += string(ty - sy, 'U');
    ans += string(tx - sx, 'R');
    ans += string(ty - sy, 'D');
    ans += string(tx - sx + 1, 'L');
    ans += string(ty - sy + 1, 'U');
    ans += string(tx - sx + 1, 'R');
    ans += "DR";
    ans += string(ty - sy + 1, 'D');
    ans += string(tx - sx + 1, 'L');
    ans += 'U';

    cout << ans << endl;

    return 0;
}