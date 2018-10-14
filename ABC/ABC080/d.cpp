#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int M = 100010;

    int N, C;
    cin >> N >> C;

    int Chan[C][M] = {};
    
    for(int i = 0; i < N; i++){
        int s, t, c;
        cin >> s >> t >> c;
        c--;
        Chan[c][s]++;
        Chan[c][t]--;
    }

    for(int i = 0; i < C; i++){
        for(int j = 1; j < M; j++){
            Chan[i][j] += Chan[i][j - 1];
        }
    }

    for(int i = 0; i < C; i++){
        for(int j = 1; j < M; j++){
            if(Chan[i][j - 1] == 0 and Chan[i][j] == 1){
                Chan[i][j - 1]++;
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < M; i++){
        int cnt = 0;
        for(int j = 0; j < C; j++){
            cnt += (Chan[j][i] > 0);
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;

    return 0;
}