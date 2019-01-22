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
  
---
  
### D - Christmas  
[問題ページ](https://atcoder.jp/contests/abc115/tasks/abc115_d)  
- #### 解法  
    [公式解説](https://img.atcoder.jp/abc115/editorial.pdf)がとても分かりやすい  
  
- #### コード(C++)  
  
    ```cpp
    #include <bits/stdc++.h>
    using namespace std;

    long long n, x;

    // レベルiバーガーの厚さ　Ai
    vector<long long> A;

    // レベルiバーガーに含まれるパティの総数 Pi
    vector<long long> P;

    // レベルnnバーガーの下からxx層に含まれるパティの枚数 f(nn, xx)
    long long f(long long nn, long long xx){
        
        // レベル0バーガーはパティ1枚
        if(nn == 0){
            return (xx <= 0 ? 0 : 1);

        // xx層 が 1+レベルnn-1バーガーの総数 以下の場合
        }else if(xx <= 1 + A[nn - 1]){
            // nn-1バーガーのxx-1層を見ればいい（xx-1の-1は一番下のバン）
            return f(nn - 1, xx - 1);

        }else{

            // [B][レベルi-1バーガー] | -> [P][レベルi-1バーガー][B]
            //
            // 丸々レベルnn-1バーガー1つに内包されるパティの数 + 1枚のパティ + 
            // レベルnn-1バーガーの中の (xx-レベルnn-1バーガーの総数とBとP)層
            return P[nn - 1] + 1 + f(nn - 1, xx - 2 - A[nn - 1]);
        }
    }

    int main(){
        cin.tie(0);
        ios::sync_with_stdio(false);

        cin >> n >> x;

        A.push_back(1);
        P.push_back(1);
        for(long long i = 0; i < n; i++){

            // [B][レベルi-1バーガー][P][レベルi-1バーガー][B]
            A.push_back(A[i] * 2 + 3);
            P.push_back(P[i] * 2 + 1);
        }

        cout << f(n, x) << endl;

        return 0;
    }
    ```
  