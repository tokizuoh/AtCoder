#include <bits/stdc++.h>
using namespace std;

const int MAX = 10;
bool D[MAX][MAX];

int dfs(int v, int n, bool visited[MAX]){
    bool all_visited = true;
    for(int i = 0; i < n; i++){
        if(visited[i] == false){
            all_visited = false;
            break;
        }
    }

    if(all_visited){
        return 1;
    }

    int ret = 0;
    for(int i = 0; i < n; i++){
        if(D[v][i] == false){
            continue;
        }
        if(visited[i]){
            continue;
        }
        visited[i] = true;
        ret += dfs(i, n, visited);
        visited[i] = false; // ?
    }
    return ret;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        D[a][b] = true;
        D[b][a] = true;
    }

    bool visited[MAX];
    for(int i = 0; i < n; i++){
        visited[i] = false;
    }

    visited[0] = true;

    cout << dfs(0, n, visited) << endl;

    return 0;
}