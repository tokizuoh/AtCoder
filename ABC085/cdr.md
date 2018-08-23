# [ABC085](https://beta.atcoder.jp/contests/abc085)  
  
## A問題  
省略  
    
## B問題  
setを使用  
setは同じ重複を許さない  
  
## C問題  
三重forはだめでした（[提出コード](https://beta.atcoder.jp/contests/abc085/submissions/3059672)）  
2000<sup>3</sup>=8000000000なのでそれはそうか  
  
蟻本の最初らへんにforのネストを少なくする方法が載っていたのを思い出した  
2000<sup>2</sup>=4000000くらいならいけるでしょ～って思って二重forに落としたらACした  
10000円札がi枚、5000円札がj枚、1000円札がk枚とする  
(i + j + k == n)で三重forを回せば計算量がとても多くなってしまう  
そこで下のようにすると二重forに落とせる  
```cpp
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            if((n - i - j) >= 0){
                if(i * 10000 + j * 5000 + (n - i - j) * 1000 == y){
                    cout << i << " " << j << " " << n - i - j << endl;
                    return 0;
                }
            }
        }
    }
```  
こんな感じにすればiとjの二重forで収まる  
n-i-jが0未満になるときがあるのでそこを注意（1000円札が-5枚とかはありえない）  