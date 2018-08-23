#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;

    int cnt = 0;
    for(int i = a; i <= b; i++){
        int tmp = i, e, f, g, h;
        e = tmp / 10000; tmp %= 10000;
        f = tmp / 1000;  tmp %= 1000;  tmp %= 100;
        g = tmp / 10;
        h = tmp % 10;
        if(e == h and f == g){
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}