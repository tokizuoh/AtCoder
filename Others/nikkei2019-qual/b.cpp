#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, ans = 0;
    cin >> n;

    string a, b, c;
    cin >> a >> b >> c;

    for(int i = 0; i < n; i++){
        if(a[i] == b[i] and b[i] == c[i]);
        else if(a[i] == b[i] or b[i] == c[i] or c[i] == a[i]) ans += 1;
        else ans += 2;
    }

    cout << ans << endl;

    return 0;
}