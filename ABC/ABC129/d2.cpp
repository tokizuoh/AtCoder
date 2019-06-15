#include <bits/stdc++.h>
using namespace std;

const int N_MAX = 2010;
char C[N_MAX][N_MAX];

int h, w;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

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
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    cin >> h >> w;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> C[i][j];
        }
    }

    UnionFind uf1(h * w), uf2(h * w);
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w - 1; j++){
            if(C[i][j] == '.' and C[i][j + 1] == '.'){
                int now = i * w + j;
                uf1.unite(now, now + 1);
            }
        }
    }

    for(int i = 0; i < w; i++){
        for(int j = 0; j < h - 1; j++){
            if(C[j][i] == '.' and C[j + 1][i] == '.'){
                int now = j * w + i;
                uf2.unite(now, now + w);
            }
        }
    }

    map<int, int> mp1, mp2;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(C[i][j] == '.'){
                int now = i * w + j;
                
                int r1 = uf1.root(now);
                mp1[r1] = -uf1.par[r1];

                int r2 = uf2.root(now);
                mp2[r2] = -uf2.par[r2];
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(C[i][j] == '#') continue;
            int cnt = 0;
            int now = i * w + j;
            int r1 = uf1.root(now);
            cnt += -uf1.par[r1];
            int r2 = uf2.root(now);
            cnt += -uf2.par[r2];

            // cout << i << ' ' << j << ' ' << -uf1.par[r1] << ' ' << -uf2.par[r2] << endl;
            cnt--;
            ans = max(ans, cnt);
        }
    }
    
    cout << ans << endl;

    return 0;
}