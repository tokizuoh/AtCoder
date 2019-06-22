#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    double w, h, x, y;
    cin >> w >> h >> x >> y;
    
    double a = w * h / 2;
    if(x == w / 2 and y == h / 2 and (int)w % 2 == 0 and (int)h % 2 == 0) cout << fixed << setprecision(9) << a << ' ' << 1 << endl;
    else cout << fixed << setprecision(9) <<  a << ' ' << 0 << endl;

    return 0;
}