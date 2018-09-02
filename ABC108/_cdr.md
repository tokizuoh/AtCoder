# [ABC108](https://beta.atcoder.jp/contests/abc108)  
[私のすべての提出](https://beta.atcoder.jp/contests/abc108/submissions?f.Task=&f.Language=&f.Status=&f.User=tokizo)  
  
## A問題  
3 = (1, 2) (3, 2)  
4 = (1, 2) (3, 2) (1, 4) (3, 4)  
このような感じでペア数が増加していく  
(kまでの奇数の個数, kまでの偶数の個数)  
→ ((k + 1) / 2) + (k / 2) となる  
  
例えばK=5の場合、5までの奇数の数は(1, 3, 5)の三個  
これは ((k + 1) / 2) で求まる（ceil）  
5までの偶数の数は (k / 2) で求まる（floor）  
よって奇数偶数全ての組み合わせ数なのでそれらを掛ける  
  
## B問題  

## C問題  
