#include <bits/stdc++.h>
using namespace std;
typedef pair<long long, long long> P;


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
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long n;
    cin >> n;

    vector<P> A(n);
    for(long long i = 0; i < n; i++){
        cin >> A[i].first >> A[i].second;
    }

    if(n == 1){
        cout << 1 << endl;
        return 0;
    }

    sort(A.rbegin(), A.rend());



    set<P> st;
    for(long long i = 0; i < n; i++){
        for(long long j = i + 1; j < n; j++){
            st.insert({A[i].first - A[j].first, A[i].second - A[j].second});
        }
    }


    long long ans = 1e9;
    for(auto x : st){
        long long a = x.first;
        long long b = x.second;

        UnionFind uf(n);
        for(long long i = 0; i < n; i++){
            for(long long j = i + 1; j < n; j++){
                long long dx = A[i].first - A[j].first;
                long long dy = A[i].second - A[j].second;
                if(dx == a and dy == b){
                    uf.unite(i, j);
                }
            }
        }

        set<long long> st;
        for(long long i = 0; i < n; i++){
            st.insert(uf.root(i));
        }
        ans = min(ans, (long long)st.size());
    }

    cout << ans << endl;

    return 0;
}