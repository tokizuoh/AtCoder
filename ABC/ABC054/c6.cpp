#include <bits/stdc++.h>
using namespace std;

int n, m, vc, ans; // vertex count
vector<bool> used(8);
vector<vector<int>> G(8);

void dfs(int now){
    used[now] = true;
    vc++;

    if(vc == n) ans++;
    else{
        for(int i = 0; i < G[now].size(); i++){
            if(!used[G[now][i]]){
                dfs(G[now][i]);
            }
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
        G[a].push_back(b);
        G[b].push_back(a);
    }

    dfs(0);

    cout << ans << endl;

    return 0;
}