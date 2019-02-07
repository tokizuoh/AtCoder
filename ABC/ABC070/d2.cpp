#include <bits/stdc++.h>
using namespace std;

int n;
const int MAX = 100010;
const long long INF = 1e18;
struct edge{
    int to;
    long long cost;
};
vector<edge> G[MAX];
long long D[MAX];
typedef pair<int, long long> P;

void dijkstra(int s){
    for(int i = 0; i < n; i++){
        D[i] = INF;
    }
    D[s] = 0;
    priority_queue<P, vector<P>, greater<P>> q;
    q.push({s, 0});
    while(!q.empty()){
        P p = q.top();
        q.pop();
        int now = p.first;
        if(D[now] < p.second) continue;
        for(int i = 0; i < G[now].size(); i++){
            edge e = G[now][i];
            if(D[e.to] > D[now] + e.cost){
                D[e.to] = D[now] + e.cost;
                q.push({e.to, D[e.to]});
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
        G[a].push_back({b, c});
        G[b].push_back({a, c});
    }

    int q, k;
    cin >> q >> k;
    dijkstra(k - 1);

    for(int i = 0; i < q; i++){
        int x, y;
        cin >> x >> y;
        cout << D[x - 1] + D[y - 1] << endl;
    }

    return 0;
}