#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const int MAX = 55;
int n, m;
struct edge{
    int to;
    int cost;
};
vector<edge> G[MAX];
int D[MAX];

void dijkstra(int s, int x, int y){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    for(int i = 0; i < n; i++){
        D[i] = INF;
    }
    D[s] = 0;
    q.push({0, s});

    while(!q.empty()){
        pair<int, int> p = q.top();
        q.pop();
        int now = p.second;
        if(D[now] < p.first) continue;
        for(int i = 0; i < G[now].size(); i++){
            edge e = G[now][i];
            if((now == x and G[now][i].to == y) or (now == y and G[now][i].to == x)) continue; 
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

    cin >> n >> m;

    vector<int> A(m), B(m);

    for(int i = 0; i < m; i++){
        cin >> A[i] >> B[i];
        A[i]--; B[i]--;
        G[A[i]].push_back({B[i], 1});
        G[B[i]].push_back({A[i], 1});
    }

    int ans = 0;
    for(int i = 0; i < m; i++){

        dijkstra(0, A[i], B[i]);

        for(int j = 0; j < n; j++){
            if(D[j] == INF){
                ans++;
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}