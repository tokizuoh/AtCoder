#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    long long l, m, n;
    
    l = a * x + b * y;
    
    long long maxi = max(x, y), mini = min(x, y);
    m = 2 * c * mini;
    m += (maxi - mini) * (mini == x ? b : a);

    n = c * 2 * maxi;

    cout << min(l, min(m, n)) << endl;

    return 0;
}