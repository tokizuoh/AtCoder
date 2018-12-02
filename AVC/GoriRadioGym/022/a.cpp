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

    vector<int> A = {1, 3, 5, 7, 8, 10, 12};
    vector<int> B = {4, 6, 9, 11};
    vector<int> C = {2};

    UnionFind UF(13);

    for(int i = 0; i < A.size() - 1; i++){
        UF.unite(A[i], A[i + 1]);
    }
    for(int i = 0; i < B.size() - 1; i++){
        UF.unite(B[i], B[i + 1]);
    }

    int x, y;
    cin >> x >> y;
    cout << (UF.same(x, y) ? "Yes" : "No") << endl;



    return 0;
}