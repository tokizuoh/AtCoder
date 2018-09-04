#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;
    
    int ans = 0;
    REP(i, b - a){
        ans += i;
    }
    cout << ans - a << endl;

    return 0;
}