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
  
---
  
### C - 755  
[問題ページ](https://atcoder.jp/contests/abc114/tasks/abc114_c)  
- #### 解法  
    ""  
    "3"------"5"------"7"  
    "33"-"35"-"37"...  
    を繰り返していく  
  
- #### コード(C++)  
  
    ```cpp
    #include <bits/stdc++.h>
    using namespace std;

    int n;
    int lim;
    vector<string> A;

    void f(int digitNum, string s){ 
        vector<bool> J(3, false);
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '3') J[0] = true;
            if(s[i] == '5') J[1] = true;
            if(s[i] == '7') J[2] = true;
        }
        int idx = find(J.begin(), J.end(), false) - J.begin();
        if(idx == 3){
            A.push_back(s);
        }
        if(digitNum == lim){
            return;
        }
        f(digitNum + 1, s + '3');
        f(digitNum + 1, s + '5');
        f(digitNum + 1, s + '7');
        return;
    }

    int main(){
        cin.tie(0);
        ios::sync_with_stdio(false);

        cin >> n;
        
        lim = to_string(n).length();
        
        if(lim < 3){
            cout << 0 << endl;
            return 0;
        }

        f(0, "");

        vector<int> B(A.size());
        for(int i = 0; i < A.size(); i++){
            B[i] = stoi(A[i]);
        }

        sort(B.begin(), B.end());

        int idx = lower_bound(B.begin(), B.end(), n) - B.begin();

        cout << idx + (B[idx] == n) << endl;

        return 0;
    }
    ```
    