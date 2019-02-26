#include <bits/stdc++.h>
using namespace std;

int n, k;
int T[7][7];

bool dfs(int now, int t){
    if(now == n) return t == 0;
    for(int i = 0; i < k; i++){
        if(dfs(now + 1, t ^ T[now][i])) return true;
    }
    return false;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> k;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            cin >> T[i][j];
        }
    }

    if(dfs(0, 0)) cout << "Found" << endl;
    else cout << "Nothing" << endl;

    return 0;
}