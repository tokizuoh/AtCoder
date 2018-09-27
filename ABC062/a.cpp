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

    int x, y;
    cin >> x >> y;

    UnionFind Uf(12);
    vector<int> A = {1, 3, 5, 7, 8, 10, 12};
    vector<int> B = {4, 6, 9, 11};
    vector<int> C = {2};
    REP(i, A.size()) A[i]--;
    REP(i, B.size()) B[i]--;
    REP(i, C.size()) C[i]--;

    REP(i, A.size() - 1){
        Uf.unite(A[0], A[i + 1]);
    }
    REP(i, B.size() - 1){
        Uf.unite(B[0], B[i + 1]);
    }

    cout << (Uf.same(x - 1, y - 1) ? "Yes" : "No") << endl;

    return 0;
}
