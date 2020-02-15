#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    double a, b, x;
    cin >> a >> b >> x;

    double r;
    if(a * a * b / 2 <= x){
        r = atan((2 * a * a * b - 2 * x) / (a * a * a));
    }else{
        r = atan(a * b * b / (2 * x));
    }

    double ans = r * 180.0 / M_PI;

    cout << fixed << setprecision(15) << ans << endl;

    return 0;
}