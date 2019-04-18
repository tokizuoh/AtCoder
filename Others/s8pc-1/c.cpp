#include <bits/stdc++.h>
using namespace std;

int n, k;
long long maxi = 0;

const int N = 55;
long long D[N];
bool seen[N];
vector<int> G[N];

void dfs(int now, long long cnt){
    seen[now] = true;
    cnt += D[now];
    maxi = max(maxi, cnt);
    for(int i = 0; i < G[now].size(); i++){
        int to = G[now][i];
        if(seen[to]) continue;
        dfs(to, cnt);
        seen[to] = false;
    }
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> D[i];
    }

    for(int i = 0; i < k; i++){
        int x, y;
        cin >> x >> y;
        x--; y--;
        G[x].push_back(y);
        G[y].push_back(x);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            seen[j] = false;
        }
        dfs(i, 0);
    }

    cout << maxi << endl;

    return 0;
}