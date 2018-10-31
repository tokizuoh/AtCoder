#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, M, R;
    cin >> N >> M >> R;
    
    int c[N][N];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i == j) c[i][j] = 0;
            else c[i][j] = 1e9;
        }
    }

    vector<int> r(R);
    for(int i = 0; i < R; i++){
        cin >> r[i];
        r[i]--;
    }

    for(int i = 0; i < M; i++){
        int A, B, C;
        cin >> A >> B >> C;
        A--; B--;
        c[A][B] = C;
        c[B][A] = C;
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            for(int k = 0; k < N; k++){
                c[j][k] = min(c[j][k], c[j][i] + c[i][k]);
            }
        }
    }

    sort(r.begin(), r.end());

    int ans = 1e9;
    do{
        int tmp, cost = 0;
        for(int i = 0; i < R; i++){
            if(i > 0){
                cost += c[tmp][r[i]];
            }
            tmp = r[i];
        }
        ans = min(ans, cost);
    }while(next_permutation(r.begin(), r.end()));

    cout << ans << endl;

    return 0;
}