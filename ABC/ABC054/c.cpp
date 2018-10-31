#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;
    bool R[N][N] = {};
    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        R[a][b] = true;
        R[b][a] = true;
    }

    vector<int> V(N - 1);
    for(int i = 0; i < N - 1; i++){
        V[i] = i + 1;
    }

    sort(V.begin(), V.end());

    int ans = 0;
    do{
        int tmp = 0;
        bool f = true;
        for(int i = 0; i < N - 1; i++){
            if(R[tmp][V[i]]);
            else{
                f = false;
                break;
            }
            tmp = V[i];
        }
        ans += f;
    }while(next_permutation(V.begin(), V.end()));

    cout << ans << endl;

    return 0;
}