#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

const int N = 100010;
vector<P> G[N];
vector<bool> seen(N);
vector<int> D(N, 1e9);

int n, m;

bool dfs(int now){
    seen[now] = true;
    for(int i = 0; i < G[now].size(); i++){
        P p = G[now][i];
        int to = p.first;
        int cost = p.second;

        if(seen[to]){
            if(D[to] != D[now] + cost) return false;
        }else{
            D[to] = D[now] + cost;
            if(!dfs(to)) return false;
        }
    }
    return true;
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int l, r, d;
        cin >> l >> r >> d;
        l--; r--;
        G[l].push_back({r, d});
        G[r].push_back({l, -d});
    }

    for(int i = 0; i < n; i++){
        if(!seen[i]){
            if(!dfs(i)){
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;

    return 0;
}