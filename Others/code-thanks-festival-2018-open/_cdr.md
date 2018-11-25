# [CODE THANKS FESTIVAL 2018(Parallel)](https://beta.atcoder.jp/contests/code-thanks-festival-2018-open)  
[私のすべての提出](https://beta.atcoder.jp/contests/code-thanks-festival-2018-open/submissions?f.Task=&f.Language=&f.Status=&f.User=tokizo)  
  
## A問題  
- A+CがT以下ならB+D  
- AがT以下ならB(*)  
- CがT以下ならD((*)とどっちも満たす場合大きい方)  
- 上記がだめなら0  
の4パターン  
  
## B問題  
コンテスト中に解けなかった  
一回の操作で赤い玉と青い玉は合計で4つ取り出す  
ここで`(X + Y)`が4で割り切れなかったらNo  
  
---  
  
操作は`(X + Y) / 4`(kとする)回行われる  
k回は必ず赤い玉、青い玉ともに1取り出される  
  
```
X -= k  
Y -= k  
```
  
ここでXとYが0以上且つ，偶数ならYesとなる  
例えばX = 7, Y = 5のとき  
X + Y = 12(4で割り切れる)
k = 12 / 4 = 3
X -= k  
Y -= k  
X = 4, Y = 2となる  
XとYが0以上且つ、偶数なのでYesとなる  
(4, 2) -> (2, 2) -> (2, 0) -> (0, 0)  