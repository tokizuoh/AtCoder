#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long x, y;
    cin >> x >> y;

    int ans = 1;
    while(true){
        if(x * 2 <= y) ans++;
        else break;
        x *= 2;
    }

    cout << ans << endl;

    return 0;
}