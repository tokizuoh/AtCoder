#include <bits/stdc++.h>
using namespace std;

int n, m, ans, vc;
int G[10][10];
bool used[10];

void dfs(int now){
    used[now] = true;
    vc++;
    if(vc == n){
        ans++;
    }
    for(int i = 0; i < n; i++){
        if(!used[i] && G[now][i]){
            dfs(i);
        }
    }
    used[now] = false;
    vc--;
    return;
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

    dfs(0);

    cout << ans << endl;

    return 0;
}