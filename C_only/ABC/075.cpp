#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

struct UnionFind{
    vector<int> par;
    UnionFind(int n) : par(n){
       REP(i, n) par[i] = -1;
    }
    int root(int x){
        if(par[x] < 0) return x;
        else return par[x] = root(par[x]);
    }
    int size(int x){
        return (-par[root(x)]);
    }
    void unite(int x, int y){
        x = root(x);
        y = root(y);
        if(x == y) return;
        if(x > y) swap(x, y);
        if(size(x) < size(y)) swap(x, y);
        par[x] += par[y];
        par[y] = x;
    }
    bool same(int x, int y){
        return root(x) == root(y);
    }
};

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector<int> A(m), B(m);
    REP(i, m){
        cin >> A[i] >> B[i];
        A[i]--;
        B[i]--;
    }

    int ans = 0;
    REP(i, m){
        UnionFind UF(n);
        REP(j, m){
            if(i == j) continue;
            UF.unite(A[j], B[j]);
        }
        if(UF.size(0) != n) ans++;
    }

    cout << ans << endl;

    return 0;
}