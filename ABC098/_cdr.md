# [ABC098](https://beta.atcoder.jp/contests/abc098)  
[私のすべての提出](https://beta.atcoder.jp/contests/abc098/submissions?f.Task=&f.Language=&f.Status=&f.User=tokizo)  
  
    
## A問題  
max(A+B,A-B,A*B)  
Python3なら2値以上のmaxが適用できる  
  
  
## B問題  
切るところを全て検証，その都度双方カウント  
  
  
## C問題  
難しいと感じた  
入力 "WEEWEEWW" の場合を考える
   
|        | W      | E      | E      | W      | E      | E      | W      | W      |  
|--------|--------|--------|--------|--------|--------|--------|--------|--------|  
|i       | 0      | 1      | 2      | 3      | 4      | 5      | 6      | 7      |  
|total[i]| 0      | 1      | 2      | 2      | 3      | 4      | 4      | 4      |  
|facing  | 4      | 4      | 3      | 3      | 3      | 2      | 3      | 3      |    
  
- `total[i]`: i番目までのEの数  
- `facing`: 自分がリーダーになったときに自分以外が自分に向き直す人数  
  
出力は `facing` の最小値  
どうやって出そうか…と考えた時，まずは手元で計算してみる  
`facing`は (リーダーより左のWの個数) + (リーダより右のEの個数) で求まる  