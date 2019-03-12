#include <bits/stdc++.h>
using namespace std;
typedef pair<long long, long long> P;

long long n, m;
const long long N_MAX = 1010;
struct edge{
    long long cost, to;
};
vector<edge> G[N_MAX];
long long D[N_MAX][28];
long long bef[N_MAX];

void dijkstra(){
    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < 28; j++){
            D[i][j] = 1e18;
        }
    }
    D[0][0] = 0;
    //bef[s] = -1;

    priority_queue<P, vector<P>, greater<P>> q;
    q.push({0, 0}); // {cost, now}
    while(!q.empty()){
        P p = q.top();
        q.pop();

        long long now = p.second;
        if(D[now][p.first % 28] < p.first) continue;
        if(now == n - 1) continue;
        for(long long i = 0; i < G[now].size(); i++){
            edge e = G[now][i];
            if(D[e.to][(p.first + e.cost) % 28] > p.first + e.cost){
                D[e.to][(p.first + e.cost) % 28] = p.first + e.cost;
                //bef[e.to] = now;
                q.push({D[e.to][(p.first + e.cost) % 28], e.to});
            }
        }
    }
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    cin >> n >> m;
    //map<P, long long> mp;
    for(long long i = 0; i < m; i++){
        long long a, b, c;
        cin >> a >> b >> c;
        G[a].push_back({c, b});
        G[b].push_back({c, a});
        //mp[{min(a, b), max(a, b)}] = c;
    }

    dijkstra();

    long long ans = 1e18;
    for(long long i = 0; i < 28; i++){
        if((i % 4 == 0) or (i % 7 == 0)){
            ans = min(ans, D[n - 1][i]);
        }
    }

    cout << ans << endl;

    /*
    vector<long long> bet;
    long long nnow = n - 1;
    while(true){
        long long a, b;
        a = nnow;
        b = bef[nnow];
        if(a > b) swap(a, b);
        bet.push_back(mp[{a, b}]);
        if(bef[nnow] == 0) break;
        nnow = min(a, b);
    }
    sort(bet.begin(), bet.end());

    long long ans = 1e9;
    for(long long i = 0; i < bet.size(); i++){
        for(long long j = 0; j < 10; j++){
            if((D[n - 1] + (bet[i] * 2) * j) % 4 == 0 or (D[n - 1] + (bet[i] * 2) * j) % 7 == 0){
                ans = min(ans, (D[n - 1] + (bet[i] * 2) * (j)));
                break;
            } 
        }
    }
    */

   // cout << ans << endl;

    return 0;
}