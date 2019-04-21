#include <bits/stdc++.h>
using namespace std;

const int N = 8;
int L[N];

int n, a, b, c, mini = 1e9;

void dfs(int depth, int na, int nb, int nc, int sc){
    if(na > 0 and nb > 0 and nc > 0){
        mini = min(mini, abs(na - a) + abs(nb - b) + abs(nc - c) + sc * 10);
    }
    if(depth == n) return;
    dfs(depth + 1, na + L[depth], nb, nc, (na == 0 ? sc : sc + 1));
    dfs(depth + 1, na, nb + L[depth], nc, (nb == 0 ? sc : sc + 1));
    dfs(depth + 1, na, nb, nc + L[depth], (nc == 0 ? sc : sc + 1));
    dfs(depth + 1, na, nb, nc, sc);
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    cin >> n >> a >> b >> c;
    for(int i = 0; i < n; i++){
        cin >> L[i];
    }

    dfs(0, 0, 0, 0, 0);

    cout << mini << endl;

    return 0;
}