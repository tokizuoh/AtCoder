#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int d, n;
    cin >> d >> n;

    int ans;
    bool j = n < 100;
    if(d == 0) ans = j ? n : 101;
    if(d == 1) ans = j ? n * 100 : 10100;
    if(d == 2) ans = j ? n * 10000 : 1010000;
    cout << ans << endl;

    return 0;
}