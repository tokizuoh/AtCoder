#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int d, n;
    cin >> d >> n;

    int ans;
    switch(d){
        case 0:
            if(n < 100) ans = n;
            else ans = 101;
            break;
        case 1:
            if(n < 100) ans = n * 100;
            else ans = 10100;
            break;
        case 2:
            if(n < 100) ans = n * 10000;
            else ans = 1010000;
            break;
    }
    cout << ans << endl;

    return 0;
}