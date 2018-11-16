# [BantakoSelection001](https://not-522.appspot.com/contest/5852731222786048)  
  
## [AGC004「A - Divide a Cuboid」](https://beta.atcoder.jp/contests/agc004/tasks/agc004_a)  
  
おそらく小さいのを1/2してほげほげするのだが、全部試した  
体積が偶数だと条件に沿って分割した場合かならず双方の体積の差は0になる  
  
```c++
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
```

## B問題  

## C問題  
