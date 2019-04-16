#include <bits/stdc++.h>
using namespace std;

const int N = 410;
char C[N][N];
bool seen[N][N];

int h, w;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

struct UnionFind{
    vector<long long> par;
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

void dfs(int x, int y, char bef, UnionFind &uf){
    seen[x][y] = true;
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx < 0 or ny < 0 or nx >= h or ny >= w){
            continue;
        }
        if(seen[nx][ny] or C[nx][ny] == bef){
            continue;
        }
        uf.unite(x * w + y, nx * w + ny);
        dfs(nx, ny, C[nx][ny], uf);
    }
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    cin >> h >> w;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> C[i][j];
        }
    }

    UnionFind uf(h * w);
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(!seen[i][j]){
                dfs(i, j, C[i][j], uf);
            }
        }
    }

    map<int, long long> mp; // {root, black_num}
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            int r = uf.root(i * w + j);
            if(-uf.par[r] < 2) continue;
            if(C[i][j] == '.') continue;
            mp[r]++;
        }
    }

    long long ans = 0;
    for(auto x : mp){
        // cout << x.first << ' ' << x.second << endl;
        ans += (-uf.par[x.first] - x.second) * x.second;
    }

    cout << ans << endl;

    return 0;
}