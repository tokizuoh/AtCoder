#include <bits/stdc++.h>
using namespace std;
typedef pair<int, long long> P; // {to, cost}

int n;
const int N = 100010;
vector<P> G[N];
vector<int> Color(N);

void dfs(int now, int pre, int color, long long acost){ // accumlate_cost
    Color[now] = color; 
    for(int i = 0; i < G[now].size(); i++){
        P p = G[now][i];
        if(p.first == pre) continue;
        long long to_acost = p.second + acost;
        if(to_acost % 2 == acost % 2 ) dfs(p.first, now, color, to_acost);
        else dfs(p.first, now, (color == 1 ? 0 : 1), to_acost);
    }
}


int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 0; i < n - 1; i++){
        int a, b;
        long long c;
        cin >> a >> b >> c;
        a--; b--;
        G[a].push_back({b, c});
        G[b].push_back({a, c});
    }
    
    Color.resize(n);
    
    dfs(0, -1, 1, 0);

    for(int i = 0; i < n; i++){
        cout << Color[i] << endl;
    }

    return 0;
}