# [AtCoder Beginner Contest 113](https://atcoder.jp/contests/abc113)  
  
### A - Discount Fare  
[問題ページ](https://atcoder.jp/contests/abc113/tasks/abc113_a)  
- #### 解法  
    x + y ÷ 2  
- #### コード(Python3)  
  
    ```python
    x, y = map(int, input().split())
    print(x + y // 2)
    ```
  
---
  
### B - Palace  
[問題ページ](https://atcoder.jp/contests/abc113/tasks/abc113_b)  
- #### 解法  
    H<sub>i</sub>ごとにT - H<sub>i</sub> × 0.006を計算し，  
    Aとの差の絶対値が一番低い番号を出力  
- #### コード(C++)  
  
    ```cpp
    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        cin.tie(0);
        ios::sync_with_stdio(false);

        int n;
        cin >> n;
        double t, a;
        cin >> t >> a;

        double mini = 1e9;
        int idx = 1e9;
        for(int i = 0; i < n; i++){
            int h;
            cin >> h;
            double ave = t - h * 0.006;
            mini = min(mini, abs(a - ave));
            if(mini == abs(a - ave)){
                idx = i;
            }
        }

        cout << idx + 1 << endl;

        return 0;
    }
    ```
  
---
  
### C  
[問題ページ]()  
- #### 解法  

- #### コード()  

```
```