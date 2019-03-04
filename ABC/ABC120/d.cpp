#include <bits/stdc++.h>
using namespace std;

struct UnionFind{
    vector<long long> par;
    UnionFind(long long N) : par(N){
        for(long long i = 0; i < N; i++){
            par[i] = -1;
        }
    }
    long long root(long long x){
        if(par[x] < 0) return x;
        else return par[x] = root(par[x]);
    }
    void unite(long long x, long long y){
        long long rx = root(x);
        long long ry = root(y);
        if(rx == ry) return;
        else{
            if(par[rx] > par[ry]) swap(rx, ry);
            par[rx] += par[ry];
            par[ry] = rx;
       }
    }
    bool same(long long x, long long y){
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

    long long n, m;
    cin >> n >> m;
    
    UnionFind uf(n);
    vector<long long> A(m), B(m);
    for(long long i = 0; i < m; i++){
        cin >> A[i] >> B[i];
        A[i]--; B[i]--;
    }

    long long sts = (n - 1) * (n) / 2;
    vector<long long> Ans(m);
    for(long long i = m - 1; i >= 0; i--){
        if(uf.same(A[i], B[i])){
            Ans[i] = sts;
        }else{
            long long asi = -uf.par[uf.root(A[i])];
            long long bsi = -uf.par[uf.root(B[i])];
            //cout << asi << "--" <<  bsi << endl;
            if(sts > 0) sts -= asi * bsi;
            Ans[i] = sts;
        }
        uf.unite(A[i], B[i]);
    }

    long long t = (n - 1) * (n) / 2;
    for(long long i = 1; i < m; i++){
        cout << Ans[i] << endl;
    }
    cout << t << endl;


    return 0;
}