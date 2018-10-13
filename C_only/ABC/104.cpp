#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int d, g;
    cin >> d >> g;
    vector<int> P(d), C(d);
    REP(i, d) cin >> P[i] >> C[i];

    int ans = 1e9;
    for(int i = 0; i < (1 << d); i++){
        int cnt = 0, cost = 0;
        for(int j = 0; j < d; j++){
            if((i >> j) & 1){
                cnt += P[j];
                cost += C[j] + P[j] * (j + 1) * 100;
            }
        }
        if(cost < g){
            for(int j = d - 1; j >= 0; j--){
                if((i >> j) & 1);
                else{
                    for(int k = 0; k < P[j]; k++){
                        cost += (j + 1) * 100;
                        cnt++;
                        if(cost >= g) break;
                    }
                }
                if(cost >= g) break;
            }
        }
        //cout << "i : " << i << "|cnt : " << cnt << "|cost : " << cost << endl;
        if(cost >= g) ans = min(ans, cnt);
    }

    cout << ans << endl;

    return 0;
}