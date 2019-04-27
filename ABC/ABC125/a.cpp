#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int a, b, t;
    cin >> a >> b >> t;

    int c = a, ans = 0;
    while(c <= t){
        ans += b;
        c += a;
    }

    cout << ans << endl;

    return 0;
}