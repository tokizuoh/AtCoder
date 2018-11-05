#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long x, y, z;
    cin >> x >> y >> z;
    
    long long ans = z;
    while(true){
        if(ans % 17 == x && ans % 107 == y) break;
        ans += 1e9 + 7;
    }

    cout << ans << endl;

    return 0;
}