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
- #### コード(C++)  
  
    ```cpp
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
  
---
  
### C - Grand Garden  
[問題ページ](https://atcoder.jp/contests/abc116/tasks/abc116_c)  
- #### 解法  
    変数 `active` と `ans` を用意する  
    for文で一つ一つ花を見ていく  
    - `active` : 直前の花の高さ  
    - `ans` : 必要な最小の水やり操作の回数  
      
    今見ている花がactive以下の場合は何もしない  
    → 水やり回数を増やす必要はない  
      
    今見ている花がactiveより大きい場合  
    → (今見ている花) - `active` を `ans` に足せば最小の水やり回数を確定することができる  
      
    解説放送([動画リンク](https://youtu.be/U3wtVmwxVoI?t=2280))がとても分かりやすい  
  
- #### コード(C++)  
  
    ```cpp
    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        cin.tie(0);
        ios::sync_with_stdio(false);

        int n;
        cin >> n;
        vector<int> h(n);
        for(int i = 0; i < n; i++){
            cin >> h[i];
        }

        int ans = 0, active = 0;
        for(int i = 0; i < n; i++){
            if(active < h[i]){
                ans += h[i] - active;
            }
            active = h[i];
        }

        cout << ans << endl;

        return 0;
    }
    ```
  