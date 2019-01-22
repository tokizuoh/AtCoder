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

### B  
[問題ページ]()  
- #### 解法  

- #### コード()  

```
```