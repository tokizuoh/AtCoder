#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;

    if(b == 1){
        cout << 0 << endl;
        return 0;
    }

    int ans = 1, now = a;
    while(true){
        if(now >= b){
            break;
        }
        ans++;
        now += a - 1;
    }

    cout << ans << endl;

    return 0;
}