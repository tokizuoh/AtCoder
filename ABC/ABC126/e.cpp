#include <bits/stdc++.h>
using namespace std;

int n, m;
const int N = 100010;
vector<int> G[N];
vector<bool> seen(N);

void dfs(int now){
    seen[now] = true;
    for(int i = 0; i < G[now].size(); i++){
        int to = G[now][i];
        if(seen[to]) continue;
        dfs(to);
    }
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x, y, z;
        cin >> x >> y >> z;
        x--; y--;
        G[x].push_back(y);
        G[y].push_back(x);
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        if(!seen[i]){
            dfs(i);
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}