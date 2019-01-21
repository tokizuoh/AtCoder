# [AtCoder Beginner Contest116](https://atcoder.jp/contests/abc116/)  
  
### A - Right Triangle  
[問題ページ](https://atcoder.jp/contests/abc116/tasks/abc116_a)  
- #### 解法  
    直角三角形なので底辺×高さ÷2  
- #### コード(Python3)  
  
    ```python
    ab, bc, ca = map(int, input().split())
    print(int(ab * bc // 2))
    ```
  
---
  
### B - Collatz Problem  
[問題ページ](https://atcoder.jp/contests/abc116/tasks/abc116_b)  
- #### 解法  
    問題タイトルから分かる通りコラッツの問題  
    問題文をそのまま書こう  
- #### コード()  
  
    ```
    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        cin.tie(0);
        ios::sync_with_stdio(false);

        int s;
        cin >> s;

        unordered_map<int, bool> mp;
        mp[s] = true;
    
        int idx = 2;
        while(true){
            if(s % 2 == 0){
                if(mp[s / 2] == true){
                    break;
                }else{
                    mp[s / 2] = true;
                    s = s / 2;
                }
            }else{
                if(mp[3 * s + 1] == true){
                    break;
                }else{
                    mp[3 * s + 1] = true;
                    s = 3 * s + 1;
                }
            }
            idx++;
        }

        cout << idx << endl;

        return 0;
    }
    ```
  