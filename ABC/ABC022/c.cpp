#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const int MAX = 310;
struct edge{
    int to, cost;
};

typedef pair<int, int> P;

vector<edge> G[MAX]; // G[i] : 頂点iと直接接続している頂点を格納
int D[MAX]; // D[i] : 頂点iまでの最短コスト

void dijkstra(int s, int to1, int cost1){
    priority_queue<P, vector<P>, greater<P>> q;
    for(int i = 0; i < MAX; i++){
        D[i] = INF;
    }
    D[s] = 0;
    q.push({0, s}); // {cost, now}

    while(!q.empty()){
        P p = q.top();
        q.pop();
        int now = p.second;

        // (start -> 今いるところ)までの最短経路が次見る候補のコストよりも小さい場合
        if(D[now] < p.first) continue;
        for(int i = 0; i < G[now].size(); i++){
            edge e = G[now][i];
            if(e.to == to1 and e.cost == cost1 and now == 0) continue;
            if(D[e.to] > D[now] + e.cost){
                D[e.to] = D[now] + e.cost;
                q.push({D[e.to], e.to});
            }
        }
    }
}


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector<edge> toOne;

    for(int i = 0; i < m; i++){
        int u, v, l;
        cin >> u >> v >> l;
        u--; v--;
        G[u].push_back({v, l});
        G[v].push_back({u, l});
        if(u == 0) toOne.push_back({v, l});
        if(v == 0) toOne.push_back({u, l});
    }

    if(toOne.size() == 1){
        cout << "-1" << endl;
        return 0;
    }

    int ans = INF;
    for(int i = 0; i < toOne.size(); i++){
        dijkstra(0, toOne[i].to, toOne[i].cost);
        for(int j = 1; j < n; j++){
            if(j == toOne[i].to){
                ans = min(ans, D[j] + toOne[i].cost);
            }
        }
    }

    cout << (ans == INF ? -1 : ans) << endl;

    return 0;
}