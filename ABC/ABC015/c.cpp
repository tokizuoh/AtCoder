#include <bits/stdc++.h>
using namespace std;

int n, k;
int T[10][10];

bool dfs(int depth, int num){
    if(depth == n){
        if(num == 0) return true;
        return false;
    }
    for(int i = 0; i < k; i++){
        if(dfs(depth + 1, num ^ T[depth][i])) return true;

        /*
        return dfs(_); だとダメ　上みたいに良い時しか返さない
        */
    }

    // 最後の砦（砦ではない）
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

    if(dfs(0, 0))cout << "Found" << endl;
    else cout << "Nothing" << endl;

    return 0;
}