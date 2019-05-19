#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

int n;
const int N = 100010;
vector<P> G[N];

vector<int> Color(N); // 1, 2

void dfs(int now, int pre, int cl){
    Color[now] = cl;
    for(int i = 0; i < G[now].size(); i++){
        P p = G[now][i];
        int to = p.first;
        int cost = p.second;
        if(to == pre) continue;
        if(cost % 2 == 0) dfs(to, now, cl);
        else dfs(to, now, (cl == 1 ? 0 : 1));
    }
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 0; i < n - 1; i++){
        int a, b, c;
        cin >> a >> b >> c;
        a--; b--;
        G[a].push_back({b, c});
        G[b].push_back({a, c});
    }
    
    Color.resize(n);

    dfs(0, -1, 0);

    for(int i = 0; i < n; i++){
        cout << Color[i] << endl;
    }

    return 0;
}