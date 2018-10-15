#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, M, Q;
    cin >> N >> M >> Q;
    vector<int> L(M), R(M);
    for(int i = 0; i < M; i++){
        cin >> L[i] >> R[i];
    }
    vector<int> p(Q), q(Q);
    for(int i = 0; i < Q; i++){
        cin >> p[i] >> q[i];
    }

    vector<vector<int>> S(N + 1, vector<int>(N + 1, 0));
    for(int i = 0; i < M; i++){
        S[L[i]][R[i]]++;
    }

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            S[i][j] += S[i][j - 1];
        }
    }
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            S[i][j] += S[i - 1][j];
        }
    }

    for(int i = 0; i < Q; i++){
        int ans = S[q[i]][q[i]];
        ans -= S[p[i] - 1][q[i]];
        ans -= S[q[i]][p[i] - 1];
        ans += S[p[i] - 1][p[i] - 1];

        cout << ans << endl;
    }

    return 0;
}