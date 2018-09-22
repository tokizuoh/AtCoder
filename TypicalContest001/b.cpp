#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

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
            if(par[rx] <= par[ry]){
                par[rx] += par[ry];
                par[ry] = rx;
            }else{
                par[ry] += par[rx];
                par[rx] = ry;
            }
        }
    }

    bool same(int x, int y){
        return root(x) == root(y);
    }
};

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, q;
    cin >> n >> q;

    UnionFind Uf(n);
    REP(i, q){
        int p, a, b;
        cin >> p >> a >> b;
        if(p == 0){
            Uf.unite(a, b);
        }else{
            bool f = Uf.same(a, b);
            cout << (f ? "Yes" : "No") << endl;
        }
    }


    return 0;
}