#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
int n;
int D1[100000], D2[100000];
vector<int> G[100000];

void dfs1(int now){
    for(int i = 0; i < G[now].size(); i++){
        int to = G[now][i];
        if(D1[to] > D1[now] + 1){
            D1[to] = D1[now] + 1;
            dfs1(to);
        }
    }
}

void dfs2(int now){
    for(int i = 0; i < G[now].size(); i++){
        int to = G[now][i];
        if(D2[to] > D2[now] + 1){
            D2[to] = D2[now] + 1;
            dfs2(to);
        }
    }
}

int main(){
    cin.tie(nullptr);
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
        D1[i] = INF;
        D2[i] = INF;
    }

    D1[0] = 0;
    dfs1(0);
    D2[n - 1] = 0;
    dfs2(n - 1);

    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(D1[i] <= D2[i]) cnt++;
        else cnt--;
    }

    if(cnt > 0) cout << "Fennec" << endl;
    else cout << "Snuke" << endl;
    
    return 0;
}