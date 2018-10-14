# [AGC028](https://beta.atcoder.jp/contests/agc028)  
[私のすべての提出](https://beta.atcoder.jp/contests/agc028/submissions?f.Task=&f.Language=&f.Status=&f.User=tokizo)  
  
## A問題  
とりあえず手元で動かす  
入力例3の場合を考える  
  
```  
15 9  
dnsusrayukuaiia  
dujrunuma  
```  
  
問題文通りに進めると  
![default](https://user-images.githubusercontent.com/37968814/46912553-36c86b00-cfb3-11e8-8192-b9149a2e96f7.JPG)  
こうなる．  
- 文字列Xの L/N の正整数倍の位置の文字を連結したら文字列Sに  
- 文字列Xの L/M の正整数倍の位置の文字を連結したら文字列Tに  
  
なれば良い  
L/N, L/Mが重なるところは同じ文字だといけない  
  
L/N, L/Mが重なるのはL/N, L/Mの最小公倍数の倍数であることはわかる  
この場合15ずつ進んでいる  
  
は？

