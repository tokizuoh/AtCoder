# [AtCoder Beginner Contest 115](https://atcoder.jp/contests/abc115)  
  
### A - Christmas Eve Eve Eve  
[問題ページ](https://atcoder.jp/contests/abc115/tasks/abc115_a)  
- #### 解法  
    `Christmas`という文字列に 25 - D 個 (半角空白 + `Eve`)を追加  
  
- #### コード(Python3)  
  
    ```python
    D = int(input())

    ans = 'Christmas'
    for i in range(25 - D):
        ans += ' Eve'

    print(ans)
    ```
  
---
  
### B - Christmas Eve Eve  
[問題ページ](https://atcoder.jp/contests/abc115/tasks/abc115_b)  
- #### 解法  
    pの総和からpの最大値の半分の値を引く  
  
- #### コード(Python3)  
  
    ```python
    N = int(input())
    p = [int(input()) for _ in range(N)]

    ans = sum(p) - int(max(p) // 2)
    print(ans)
    ```
  
---
  
### C - Christmas Eve  
[問題ページ](https://atcoder.jp/contests/abc115/tasks/abc115_c)  
- #### 解法  
    ソートしてk個の塊ずつ見ていき，塊の最初と最後の差の最小値を更新していく  
  
- #### コード(C++)  
  
    ```cpp
    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        cin.tie(0);
        ios::sync_with_stdio(false);

        int n, k;
        cin >> n >> k;
        vector<int> H(n);
        for(int i = 0; i < n; i++){
            cin >> H[i];
        }

        sort(H.begin(), H.end());

        int mini = 1e9;
        for(int i = 0; i < n - k + 1; i++){
            mini = min(mini, H[i + k - 1] - H[i]);
        }

        cout << mini << endl;

        return 0;
    }
    ```
  