#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long k, a, b, ans = 0;
    cin >> k >> a >> b;
    if(b - a >= 2){
        int cnt = a - 1;
        if(k < cnt){
            ans = k + 1;
        }else{
            k -= cnt;
            ans += a;
            ans += (k / 2) * (b - a);
            ans += k % 2;
        }
    }else{
        ans = k + 1;
    }

    cout << ans << endl;

    return 0;
}