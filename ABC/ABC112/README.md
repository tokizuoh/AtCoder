# [AtCoder Beginner Contest 112](https://atcoder.jp/contests/abc112)  
  
### A - Programming Education  
[問題ページ](https://atcoder.jp/contests/abc112/tasks/abc112_a)  
- #### 解法  
    nを入力した時点で条件分岐するのが吉  
- #### コード(Python3)  
  
    ```python
    n = int(input())
    if n == 1:
        print('Hello World')
    else:
        print(eval(input()+'+'+input()))
    ```
  
---
  
### B - Time Limit Exceeded  
[問題ページ](https://atcoder.jp/contests/abc112/tasks/abc112_b)  
- #### 解法  
    変数の大文字、小文字に注意
  
- #### コード(C++)  
  
    ```cpp
    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        cin.tie(0);
        ios::sync_with_stdio(false);

        int N, T;
        cin >> N >> T;

        int mini = 1e9;
        for(int i = 0; i < N; i++){
            int c, t;
            cin >> c >> t;
            if(t <= T){
                mini = min(mini, c);
            }
        }

        if(mini == 1e9){
            cout << "TLE" << endl;
        }else{
            cout << mini << endl;
        }

        return 0;
    }
    ```
  