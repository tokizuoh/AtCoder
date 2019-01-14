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
    ・B = -7+i文字目から最後までの部分文字列  
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
  
---
  
### C - Exam and Wizard  
[問題ページ](https://atcoder.jp/contests/keyence2019/tasks/keyence2019_c)  
- #### 解法  
    ※紛らわしいのですが問題文中のCと本解法のCは別物とします  
      
    B<sub>i</sub>-A<sub>i</sub>をdとしたとき，  
    ・d == 0 : そのまま  
    ・d < 0  : 他に割り当てられる...配列Cにpush  
    ・d > 0  : 足りないので配列Cから貰う必要がある...配列Dにpush  
      
    Dの総和+Cの総和が0より大きい場合，構成不可能(CでDを補えない)  
    C, D両者ともソートしする  
    ソートしたらCはdが小さい順，つまりDに分け与えられる数量が多い順に格納される  
    また，Dはdが小さい順，つまりCから分け与えられる数量が小さい順に格納される  
    Dはなるべく大きい順からCに配る（変更するiの個数をなるべく抑える為）ことにより最小値が求まる  
  
- #### コード(C++)  
```cpp  
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long n;
    cin >> n;
    vector<long long> A(n), B(n);

    vector<long long> C, D;
    for(long long i = 0; i < n; i++){
        cin >> A[i];
    }
    for(long long i = 0; i < n; i++){
        cin >> B[i];
        long long d = B[i] - A[i];
        if(d <= 0){
            C.push_back(d);
        }else if(d > 0){
            D.push_back(d);
        }
    }

    if(D.size() == 0){
        cout << 0 << endl;
        return 0;
    }

    sort(C.begin(), C.end());
    sort(D.begin(), D.end());

    long long ct = 0;
    for(long long i = 0; i < C.size(); i++){
        ct += C[i];
    }

    long long dt = 0;
    for(long long i = 0; i < D.size(); i++){
        dt += D[i];
    }
    
    if(-1 * ct < dt){
        cout << -1 << endl;
        return 0;
    }

    long long ans = D.size(), di = 0;
    for(long long i = 0; i < C.size(); i++){
        ans++;
        while(di < D.size()){
            long long f = D[di] + C[i];
            if(f < 0){
                C[i] += D[di];
                di++;
                if(di == D.size()){
                    cout << ans << endl;
                    return 0;
                }
            }else{
                D[di] += C[i];
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
```
  
