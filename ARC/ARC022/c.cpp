#include <bits/stdc++.h>
using namespace std;

const int MAX = 100010;
const int INF = 1e9;
vector<int> G[MAX];
int D[MAX];
int n;

void dfs(int now){
    for(int i = 0; i < G[now].size(); i++){
        int to = G[now][i];
        if(D[to] > D[now] + 1){
            D[to] = D[now] + 1;
            dfs(to);
        }
    }
}


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 0; i < n - 1; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    for(int i = 0; i < n; i++){
        D[i] = INF;
    }
    D[0] = 0;

    dfs(0);

    int maxi = -1e9, ii;
    for(int i = 0; i < n; i++){
        if(maxi < D[i]){
            maxi = D[i];
            ii = i;
        }
    }


    int ans = -1e9, c, d;
    for(int i = 0; i < n; i++){
        D[i] = INF;
    }
    D[ii] = 0;
    dfs(ii);
    int idx;
    maxi = -1e9;
    for(int i = 0; i < n; i++){
        if(D[i] > maxi){
            maxi = D[i];
            idx = i;
        }
    }
    if(maxi > ans){
        c = ii;
        d = idx;
        ans = maxi;
    }

    cout << c + 1 << ' ' << d + 1 << endl;

    return 0;
}