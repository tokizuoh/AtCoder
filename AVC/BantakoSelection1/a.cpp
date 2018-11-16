//https://beta.atcoder.jp/contests/agc004/tasks/agc004_a

#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long a, b, c;
    cin >> a >> b >> c;

    long long p = a * b * c;
    if(p % 2){
        long long x, y, z;
        x = abs((a - a / 2) * b * c - a / 2 * b * c);
        y = abs((b - b / 2) * c * a - b / 2 * c * a);
        z = abs((c - c / 2) * a * b - c / 2 * a * b);
        cout << min(x, min(y, z)) << endl;
    }else{
        cout << 0 << endl;
    }

    return 0;
}