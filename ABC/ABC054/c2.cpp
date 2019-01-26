#include <bits/stdc++.h>
using namespace std;

int n, m, ans;
bool G[10][10];
bool used[10];

int dfs(int num, bool used[]){
    
    // 全てused
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(used[i]) cnt++;
    }
    if(cnt == n){
        return 1;
    }

    int ans = 0;
    for(int i = 0; i < n; i++){

        // num - iパスがない or もう通った -> continue
        if(!(G[num][i]) or used[i]){
            continue;
        }

        // 通るで
        used[i] = true;
        ans += dfs(i, used);
        
        // 通ったで
        used[i] = false;
    }
    return ans;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a][b] = true;
        G[b][a] = true;
    }

    used[0] = true;

    cout << dfs(0, used) << endl;

    return 0;
}