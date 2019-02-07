#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;
struct edge{
    int to;
    long long cost;
};

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector<edge> G[n];
    for(int i = 0; i < m; i++){
        int a, b;
        long long c;
        cin >> a >> b >> c;
        a--; b--;
        G[a].push_back({b, -c});
    }

    long long D[n];
    for(int i = 0; i < n; i++){
        D[i] = INF;
    }
    D[0] = 0;

    for(int i = 0; i < n * 2; i++){
        bool f = true;
        for(int j = 0; j < n; j++){
            for(int k = 0; k < G[j].size(); k++){
                edge e = G[j][k];
                if(D[e.to] > D[j] + e.cost){
                    if(e.to == n - 1) f = false;
                    D[e.to] = D[j] + e.cost;
                }
            }
        }
        if(i > n and !f){
            cout << "inf" << endl;
            return 0;
        }
    }

    cout << -D[n - 1] << endl;

    return 0;
}
