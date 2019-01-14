# [AISing Programming Contest 2019](https://atcoder.jp/contests/aising2019)  
  
### A - Bulletin Board  
[問題ページ](https://atcoder.jp/contests/aising2019/tasks/aising2019_a)  
- #### 解法  
    何も考えずにコード書いたが，導出方法があいまいだったので記載  
  
![default](https://user-images.githubusercontent.com/37968814/51098503-10160c80-180e-11e9-8f06-43964b66d8f1.PNG)  
  
- #### コード(Python3)  
  
```python
N = int(input())
H = int(input())
W = int(input())
print((N-H+1)*(N-W+1))
```
  
---
### B - Contests  
[問題ページ](https://atcoder.jp/contests/aising2019/tasks/aising2019_b)  
- #### 解法  
    A点以下，A+1点以上B点以下，B+1点以上の問題の個数の最小値  
  
- #### コード(c++)  
  
```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, a, b;
    cin >> n >> a >> b;
    vector<int> P(n);
    for(int i = 0; i < n; i++){
        cin >> P[i];
    }

    int x = 0, y = 0, z = 0;
    for(int i = 0; i < n; i++){
        if(P[i] <= a) x++;
    }
    for(int i = 0; i < n; i++){
        if(a < P[i] and P[i] <= b) y++;
    }
    for(int i = 0; i < n; i++){
        if(b < P[i]) z++;
    }

    cout << min(x, min(y, z)) << endl;

    return 0;
}
```
  
---
  
### C - Alternating Path  
[問題ページ](https://atcoder.jp/contests/aising2019/tasks/aising2019_c)  
- #### 解法  
    - DFS  
    黒白黒白…の連結部分をなるべく伸ばす  
    任意の黒から連結部分内の白に到達可能なことから，  
    (黒白黒白…内の黒白黒白…の個数) = (連結内の黒の個数) * (連結内の白の個数)  
- #### コード  
    - DFS(C++)  
    ```cpp
    #include <bits/stdc++.h>
    using namespace std;

    int h, w;
    long long bl = 0, wh = 0;
    const int MAXI = 410;
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    vector<string> S;

    bool seen[MAXI][MAXI];

    void dfs(int x, int y){
        
        // 到達済みにする
        seen[x][y] = true;
        
        // カウント(*)
        if(S[x][y] == '#') bl++;
        else wh++;
        
        // いけるとこまでいく
        for(int i = 0; i < 4; i++){
            int nx, ny;
            nx = x + dx[i];
            ny = y + dy[i];

            // ありえんところ
            if(nx < 0 or ny < 0 or nx >= h or ny >= w){
                continue;
            }
            
            // 移動前と同じ色 or 到達済み
            if(S[x][y] == S[nx][ny] or seen[nx][ny]){
                continue;
            }

            // (*)を[nx][ny]としてここに書いていたが，
            // 黒白のみのときにカウントされない(2ペア以降からのカウントになる)
            dfs(nx, ny);
        }
    }

    int main(){
        cin.tie(0);
        ios::sync_with_stdio(false);

        cin >> h >> w;
        S.resize(h);
        for(int i = 0; i < h; i++){
            cin >> S[i];
        }

        long long ans = 0;
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                if(S[i][j] == '.'){
                    continue;
                }
                bl = 0, wh = 0;
                dfs(i, j);
                ans += bl * wh;
            }
        }

        cout << ans << endl;

        return 0;
    }
    ```
  
---