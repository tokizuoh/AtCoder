#include <bits/stdc++.h>
using namespace std;

int imos[31][100010];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, C, t_max = 0;
    cin >> N >> C;

    for(int i = 0; i < N; i++){
        int s, t, c;
        cin >> s >> t >> c;
        imos[c - 1][s - 1]++;
        imos[c - 1][t]--;
        t_max = max(t_max, t);
    }

    for(int i = 0; i < C; i++){
        for(int j = 1; j < t_max + 1; j++){
            imos[i][j] += imos[i][j - 1];
        }
    }

    for(int i = 0; i < C; i++){
        for(int j = 0; j < t_max + 1; j++){
            if(imos[i][j] > 1) imos[i][j] = 1;
        }
    }

    int ans = 0;
    for(int i = 0; i < t_max + 1; i++){
        int cnt = 0;
        for(int j = 0; j < C; j++){
            cnt += imos[j][i];
        }
        ans = max(ans, cnt);
    }

    cout << ans << endl;

    return 0;
}