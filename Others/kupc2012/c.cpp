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
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    UnionFind uf(n);
    for(int i = 0; i < k; i++){
        int m;
        cin >> m;
        int bef;
        for(int j = 0; j < m; j++){
            int b;
            cin >> b;
            b--;
            if(j > 0) uf.unite(bef, b);
            bef = b;
        }
    }

    int r, ans = 0;
    map<int, bool> mp;
    cin >> r;
    for(int i = 0; i < r; i++){
        int p, q;
        cin >> p >> q;
        p--; q--;
        if(uf.root(p) == uf.root(q)){
            if(!mp[p]){ans++; mp[p] = true;}
            if(!mp[q]){ans++; mp[q] = true;}
        }
    }

    cout << ans << endl;

    return 0;
}