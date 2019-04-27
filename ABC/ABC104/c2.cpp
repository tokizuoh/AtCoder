#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int d, g;
    cin >> d >> g;
    vector<int> P(d), C(d);
    for(int i = 0; i < d; i++){
        cin >> P[i] >> C[i];
    }

    int mini = 1e9;
    for(int i = 0; i < (1 << d); i++){
        int point = 0, cnt = 0;
        for(int j = 0; j < d; j++){
            if((i >> j) & 1){
                point += (j + 1) * P[j] * 100 + C[j];
                cnt += P[j];
            }
        }
        if(point < g){
            for(int j = d - 1; j >= 0; j--){
                if((i >> j) & 1) continue;
                for(int k = 0; k < P[j]; k++){
                    point += (j + 1) * 100;
                    cnt++;
                    if(point >= g) break;
                }
                if(point >= g) break;
                point += C[j];
            }
        }
        mini = min(mini, cnt);
    }

    cout << mini << endl;

    return 0;
}