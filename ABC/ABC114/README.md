# [AtCoder Beginner Contest 114](https://atcoder.jp/contests/abc114)  
  
### A - 753  
[問題ページ](https://atcoder.jp/contests/abc114/tasks/abc114_a)  
- #### 解法  
    Xが[3, 5, 7]に含まれているかどうか  
- #### コード(Python3)  
  
    ```python
    print(['NO','YES'][int(input())in[3,5,7]])
    ```
  
---
  
### B - 754  
[問題ページ](https://atcoder.jp/contests/abc114/tasks/abc114_b)  
- #### 解法  
    前から3つの塊ごと見ていき，各々数値に直して753との差の絶対値の中で最小の値が答え  
- #### コード(Python3)  
  
    ```python
    s=input()
    mini=int(1e9)
    for i in range(len(s) - 2):
        mini = min(mini, abs(753-int(s[i:i+3])))
    print(mini)
    ```
  