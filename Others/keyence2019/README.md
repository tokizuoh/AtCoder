# [KEYENCE Programming Contest 2019](https://atcoder.jp/contests/keyence2019)  
  
### A - Beginning  
[問題ページ](https://atcoder.jp/contests/keyence2019/tasks/keyence2019_a)  
- #### 解法  
    文字列のリストとして受け取りソート  
    ソートしたものが1479と同値ならYES  
  
- #### コード (Python3)  
```python
print(['NO','YES'][''.join(sorted(input().split()))=='1479'])
```
  
---
  
### B - KEYENCE String  
[問題ページ](https://atcoder.jp/contests/keyence2019/tasks/keyence2019_b)  
- #### 解法  
    A, Bをそれぞれ  
    ・A = 前からi(0 <= i <= 7)文字目までの部分文字列  
    ・B = i(0 <= i <= 7)文字目から最後までの部分文字列  
    としたときのA + Bを全探索し，A + Bが`'keyence'`になるかどうか  
  
- #### コード (Python3)  
```python
S = input()
for i in range(7):
    if S[:i] + S[-7+i:] == 'keyence':
        print('YES')
        exit()
print('NO')  
```
  
