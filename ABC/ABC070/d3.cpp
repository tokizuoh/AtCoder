#include <bits/stdc++.h>
using namespace std;
typedef pair<long long, int> P;

const int MAX = 100010;
const long long INF = 1e18;
int n;
struct edge {
    long long cost;
    int to;
};
vector<edge> G[MAX];
vector<long long> D(MAX);

void dijkstra(int s){
    for(int i = 0; i < n; i++){
        D[i] = INF;
    }
    D[s] = 0;

    priority_queue<P, vector<P>, greater<P>> q;
    q.push({0, s});
    while(!q.empty()){
        P p = q.top();
        q.pop();
        int now = p.second;
        for(int i = 0; i < G[now].size(); i++){
            edge e = G[now][i];
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

    cin >> n;
    for(int i = 0; i < n - 1; i++){
        int a, b;
        long long c;
        cin >> a >> b >> c;
        a--; b--;
        G[a].push_back({c, b});
        G[b].push_back({c, a});
    }

    int q, k;
    cin >> q >> k;

    k--;
    dijkstra(k);

    for(int i = 0; i < q; i++){
        int x, y;
        cin >> x >> y;
        x--; y--;
        cout << D[x] + D[y] << endl;
    }

    return 0;
}