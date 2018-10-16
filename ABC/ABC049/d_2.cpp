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

    int N, K, L;
    cin >> N >> K >> L;

    UnionFind UF1(N), UF2(N);

    for(int i = 0; i < K; i++){
        int p, q;
        cin >> p >> q;
        UF1.unite(p - 1, q - 1);
    }
    for(int i = 0; i < L; i++){
        int r, s;
        cin >> r >> s;
        UF2.unite(r - 1, s - 1);
    }

    map<pair<int, int>, int> mp;
    for(int i = 0; i < N; i++){
        mp[{UF1.root(i), UF2.root(i)}]++;
    }

    for(int i = 0; i < N; i++){
        if(i > 0) cout << " ";
        cout << mp[{UF1.root(i), UF2.root(i)}];
    }
    cout << endl;

    return 0;
}