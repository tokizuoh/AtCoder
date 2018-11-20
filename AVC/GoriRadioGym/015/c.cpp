#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long n, m;
    cin >> n >> m;

    long long ans = 0;
    if(n >= m / 2){
        ans = m / 2;
    }else{
        ans = n;
        m -= 2 * n;
        ans += m / 4;
    }

    cout << ans << endl;

    return 0;
}