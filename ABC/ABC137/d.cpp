#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<int> G[100010];
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        if(a > m) continue;
        G[a].push_back(b);
    }

    long long ans = 0;
    priority_queue<int> que;
    for(int i = 1; i <= m; i++){
        for(int j = 0; j < G[i].size(); j++){
            que.push(G[i][j]);
        }
        if(que.size() > 0){
            ans += que.top();
            que.pop();
        }
    }

    cout << ans << endl;

    return 0;
}
