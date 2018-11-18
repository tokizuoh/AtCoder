#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    long long x, y, a = 1, b = 1;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        
        // WA
        long long p = max((a + (x - 1)) / x, (b + (y - 1)) / y);
        a = x * p;
        b = y * p;
        
        continue;

        long long p1 = a / x + (a % x ? 1 : 0);
        long long p2 = b / y + (b % y ? 1 : 0);

        a = x * max(p1, p2);
        b = y * max(p1, p2);
    }

    cout << a + b << endl;

    return 0;
}