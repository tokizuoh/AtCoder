#include <bits/stdc++.h>
using namespace std;

int n, k;
int T[5][5];

bool dfs(int now, int value){
    if(now == n) return value == 0;
    for(int i = 0; i < k; i++){
        if(dfs(now + 1, value ^ T[now][i])) return true;
    }
    return false;
}

int main(){
    cin.tie(nullptr);
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