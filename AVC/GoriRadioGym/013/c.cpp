#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    bool F[n][n] = {};
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        F[a][b] = true;
        F[b][a] = true;
    }

    vector<int> V(n - 1);
    for(int i = 0; i < n - 1; i++){
        V[i] = i + 1;
    }

    sort(V.begin(), V.end());

    int ans = 0;
    do{
        int now = 0, next;
        bool f = true;
        for(int i = 0; i < n - 1; i++){
            next = V[i];
            if(F[now][next]);
            else{
                f = false;
                break;
            }
            now = next;
        }
        if(f) ans++;
    }while(next_permutation(V.begin(), V.end()));

    cout << ans << endl;

    return 0;
}