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

    int n, k, l;
    cin >> n >> k >> l;
    
    UnionFind UF1(n), UF2(n);
    
    REP(i, k){
        int p, q;
        cin >> p >> q;
        p--; q--;
        UF1.unite(p, q);
    }

    REP(i, l){
        int r, s;
        cin >> r >> s;
        r--; s--;
        UF2.unite(r, s);
    }

    map<pair<int, int>, int> mp;
    REP(i, n){
        mp[{UF1.root(i), UF2.root(i)}]++;
    }

    REP(i, n){
        int ans = mp[{UF1.root(i), UF2.root(i)}];
        if(i > 0) cout << " " << ans;
        else cout << ans;
    }
    cout << endl;

    return 0;
}