#include <bits/stdc++.h>
using namespace std;

struct UnionFind{
    vector<int> par;
    UnionFind(int N) : par(N){
        for(int i = 0; i < N; i++){
            par[i] = -1;
        }
    }
    int root(int x){
        if(par[x] < 0) return x;
        else return par[x] = root(par[x]);
    }
    void unite(int x, int y){
        int rx = root(x);
        int ry = root(y);
        if(rx == ry) return;
        else{
            if(par[rx] > par[ry]) swap(rx, ry);
            par[rx] += par[ry];
            par[ry] = rx;
       }
    }
    bool same(int x, int y){
        return root(x) == root(y);
    }
    void check(){
        for(auto x : par){
            cout << x << " ";
        }
        cout << endl;
    }
};

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, M, S;
    cin >> N >> M >> S;
    S--;

    vector<pair<int, int>> Edge(M);
    for(int i = 0; i < M; i++){
        int u, v;
        cin >> u >> v;
        u--; v--;
        if(u > v) swap(u, v);
        Edge[i] = {u, v};
    }

    sort(Edge.rbegin(), Edge.rend());

    int idx = 0;
    UnionFind UF(N);
    vector<int> Ans;
    for(int i = N - 1; i >= 0; i--){
        while(idx < M and Edge[idx].first >= i){
            UF.unite(Edge[idx].first, Edge[idx].second);
            idx++;
        }
        if(UF.same(i, S)){
            Ans.push_back(i + 1);
        }
    }

    sort(Ans.begin(), Ans.end());

    for(auto x : Ans){
        cout << x << endl;
    }

    return 0;
}