#include <bits/stdc++.h>
using namespace std;

const int MAX = 100010;

struct edge{
    int to;
    long long cost;
};
vector<edge> G[MAX];
long long depth[MAX];
bool seen[MAX];

void dfs(int now, long long costs){
    seen[now] = true;
    depth[now] = costs;
    for(int i = 0; i < G[now].size(); i++){
        edge e = G[now][i];
        if(!seen[e.to]){
            dfs(e.to, costs + e.cost);
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    for(int i = 0; i < n - 1; i++){
        int a, b, c;
        cin >> a >> b >> c;
        a--; b--;
        G[a].push_back(edge{b, c});
        G[b].push_back(edge{a, c});
    }

    int q, k;
    cin >> q >> k;

    k--;
    dfs(k, 0);

    for(int i = 0; i < q; i++){
        int x, y;
        cin >> x >> y;
        x--; y--;
        cout << depth[x] + depth[y] << endl;
    }

    /*
    cout << "-------------" << endl;
    for(int i = 0; i < n; i++){
        cout << i << ' ' << depth[i] << endl;
    }
    */

    return 0;
}