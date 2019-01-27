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

    int n, m;
    cin >> n >> m;

    UnionFind UF(n + m);
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        for(int j = 0; j < k; j++){
            int l;
            cin >> l;
            UF.unite(i, n + l - 1);
        }
    }

    int parent = -1e9;
    for(int i = 0; i < n; i++){
        if(i == 0){
            parent = UF.root(i);
        }else{
            if(parent != UF.root(i)){
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;

    return 0;
}