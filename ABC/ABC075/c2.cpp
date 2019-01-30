#include <bits/stdc++.h>
using namespace std;

int n, m, vc, ans;
const int MAX = 55;
int A[MAX], B[MAX];
bool used[MAX], G[MAX][MAX];

void dfs(int now){
    used[now] = true;
    for(int i = 0; i < n; i++){
        if(!used[i] && G[now][i]){
            dfs(i);
        }
    }
    return;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> A[i] >> B[i];
        A[i]--; B[i]--;
        G[A[i]][B[i]] = true;
        G[B[i]][A[i]] = true;
    }

    int ans = 0;
    for(int i = 0; i < m; i++){
        G[A[i]][B[i]] = false;
        G[B[i]][A[i]] = false;
        for(int j = 0; j < n; j++){
            used[j] = false;
        }

        dfs(0);

        bool f = true;
        for(int j = 0; j < n; j++){
            if(used[j]);
            else f = false;
        }

        if(!f) ans++;

        G[A[i]][B[i]] = true;
        G[B[i]][A[i]] = true;
    }

    cout << ans << endl;

    return 0;
}