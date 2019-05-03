#include <bits/stdc++.h>
using namespace std;
typedef pair<long long, pair<int, long long>> P; //{cost, {now, before_Ci}}

int n, m, k;
const int N = 300030;

struct edge{
    long long cost;
    int to;
};
vector<int> D(N);
vector<edge> G[N];

void dijkstra(int start){
    for(int i = 0; i < n; i++){
        D[i] = 1e9;
    }
    D[start] = 0;
    priority_queue<P, vector<P>, greater<P>> q;
    q.push({0, {0, -1}});
    while(!q.empty()){
        P p = q.top();
        q.pop();
        long long cst = p.first;
        int now = p.second.first;
        long long before_cst = p.second.second;
        for(int i = 0; i < G[now].size(); i++){
            edge e = G[now][i];
            if(e.cost == before_cst){
                if(D[e.to] > D[now]){
                    D[e.to] = D[now];
                    q.push({D[e.to], {e.to, e.cost}});
                }
            }else{
                if(D[e.to] > D[now] + 1){
                    D[e.to] = D[now] + 1;
                    q.push({D[e.to], {e.to, e.cost}});
                }
            }
        }
    }
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    cin >> n >> m >> k;
    for(int i = 0; i < m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        a--; b--;
        G[a].push_back({c, b});
        G[b].push_back({c, a});
    }

    dijkstra(0);

    cout << (D[n-1]==1e9 ? -1 : D[n-1] * k) << endl;

    return 0;
}