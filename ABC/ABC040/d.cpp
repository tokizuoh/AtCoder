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

    // P : {year, {city, city}}
    vector<pair<int, pair<int, int>>> P(m);
    for(int i = 0; i < m; i++){
        int a, b, y;
        cin >> a >> b >> y;
        P[i] = {y, {a - 1, b - 1}};
    }
    sort(P.rbegin(), P.rend());

    int q;
    cin >> q;

    // Q : {year, city}
    vector<pair<int, int>> Q(q);
    vector<pair<pair<int, int>, int>> ordered_Q(q);

    vector<pair<int, int>> Tmp(q);
    map<pair<int, int>, int> mp_Q;


    for(int i = 0; i < q; i++){
        int v, w;
        cin >> v >> w;
        v--;
        Q[i] = {w, v};
        ordered_Q[i] = {{w, v}, -1e9};
        Tmp[i] = {w, v};
    }
    sort(Q.rbegin(), Q.rend());

    /*
    cout << "-------------" << endl;
    for(auto x : P){
        cout << x.first << ' ' << x.second.first << ' ' << x.second.second << endl;
    }
    cout << "-------------" << endl;
    for(auto x : Q){
        cout << x.first << ' ' << x.second << endl;
    }
    */

    UnionFind UF(n);
    int p_i = 0;
    bool f = true;
    for(int i = 0; i < q; i++){
        while(f and Q[i].first < P[p_i].first){
            UF.unite(P[p_i].second.first, P[p_i].second.second);
            p_i++;
            if(p_i >= m) f = false;
        }
        mp_Q[{Q[i].first, Q[i].second}] = -1 * UF.par[UF.root(Q[i].second)];
        
        /*
        for(int j = 0; j < q; j++){
            if(ordered_Q[j].first.first == Q[i].first and ordered_Q[j].first.second == Q[i].second){
                ordered_Q[j].second = -1 * UF.par[UF.root(ordered_Q[j].first.second)];
            }
        }
        */
    }

    //UF.check();
    for(int i = 0; i < q; i++){
        //cout << ordered_Q[i].second << endl;
        cout << mp_Q[{Tmp[i].first, Tmp[i].second}] << endl;
    }


    return 0;
}