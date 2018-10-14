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

    string a;
    cin >> a;

    string One = "ADOPQR";
    string Two = "B";
    string OneTwo = One + Two;

    UnionFind Uf(26);
    REP(i, One.size() - 1){
        Uf.unite((int)(One[i] - 'A'), (int)(One[i + 1] - 'A'));
    }

    vector<int> Check;
    REP(i, 26){
        bool f = true;
        REP(j, OneTwo.size()){
            if(i == (int)(OneTwo[j] - 'A')){
                f = false;
                break;
            } 
        }
        if(f) Check.push_back(i);
    }

    REP(i, Check.size() - 1){
        Uf.unite(Check[i], Check[i + 1]);
    }

    int cnt = 0;
    string UTPC = "UTPC";
    REP(i, 4){
        cnt += Uf.same(UTPC[i], a[i]);
    }

    cout << (cnt == 4 ? "yes" : "no")  << endl;

    return 0;
}
