# [AISing Programming Contest 2019](https://atcoder.jp/contests/aising2019)  
  
### A - Bulletin Board  
[問題ページ](https://atcoder.jp/contests/aising2019/tasks/aising2019_a)  
- #### 解法  
    何も考えずにコード書いたが，導出方法があいまいだったので記載  
  
![default](https://user-images.githubusercontent.com/37968814/51098503-10160c80-180e-11e9-8f06-43964b66d8f1.PNG)  
  
- #### コード(Python3)  
  
```python
N = int(input())
H = int(input())
W = int(input())
print((N-H+1)*(N-W+1))
```
  
---
### B - Contests  
[問題ページ](https://atcoder.jp/contests/aising2019/tasks/aising2019_b)  
- #### 解法  
    A点以下，A+1点以上B点以下，B+1点以上の問題の個数の最小値  
  
- #### コード(c++)  
  
```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, a, b;
    cin >> n >> a >> b;
    vector<int> P(n);
    for(int i = 0; i < n; i++){
        cin >> P[i];
    }

    int x = 0, y = 0, z = 0;
    for(int i = 0; i < n; i++){
        if(P[i] <= a) x++;
    }
    for(int i = 0; i < n; i++){
        if(a < P[i] and P[i] <= b) y++;
    }
    for(int i = 0; i < n; i++){
        if(b < P[i]) z++;
    }

    cout << min(x, min(y, z)) << endl;

    return 0;
}
```