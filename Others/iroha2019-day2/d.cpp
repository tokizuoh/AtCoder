#include <bits/stdc++.h>
using namespace std;

const int M_MAX = 400010;
int n, m;

struct edge { int u, v, num, cost; };
bool comp(const edge &e1, const edge &e2){
    return e1.cost < e2.cost;
}

edge G[M_MAX];

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

set<int> st;
void kruskal(){
    sort(G, G + m, comp);
    UnionFind uf(n);
    for(int i = 0; i < m; i++){
        edge e = G[i];
        if(uf.same(e.u, e.v)) continue;
        else{
            uf.unite(e.u, e.v);
            st.insert(e.num);
        }
    }
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        a--; b--;
        G[i].u = a;
        G[i].v = b;
        G[i].num = i + 1;
        G[i].cost = -c;
    }

    kruskal();

    for(auto x : st){
        cout << x << endl;
    }

    return 0;
}