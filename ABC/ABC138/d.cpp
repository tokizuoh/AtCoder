#include <bits/stdc++.h>
using namespace std;

long long n, q;

const long long N = 200010;
vector<long long> G[N];
vector<long long> Count(N, 0);
vector<bool> seen(N);

void dfs(long long now, long long cnt){
    seen[now] = true;
    for(long long i = 0; i < G[now].size(); i++){
        long long to = G[now][i];
        if(seen[to]) continue;
        dfs(to, cnt + Count[now]);
    }
    Count[now] += cnt;
    return;
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    cin >> n >> q;
    for(long long i = 0; i < n - 1; i++){
        long long a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    while(q--){
        long long p, x;
        cin >> p >> x;
        p--;
        Count[p] += x;
    }

    dfs(0, 0);

    for(long long i = 0; i < n; i++){
        cout << Count[i] << ' ';
    }
    cout << endl;

    return 0;
}