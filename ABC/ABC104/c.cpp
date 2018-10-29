#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int D, G;
    cin >> D >> G;
    vector<int> p(D), c(D);
    for(int i = 0; i < D; i++){
        cin >> p[i] >> c[i];
    }

    int mini = 1e9;
    for(int i = 0; i < (1 << D); i++){
        int total = 0, cnt = 0;
        for(int j = 0; j < D; j++){
            if((i >> j) & 1){
                total += p[j] * (j + 1) * 100 + c[j];
                cnt += p[j];
            }
        }
        if(total < G){
            bool f = false;
            for(int j = D - 1; j >= 0; j--){
                if((i >> j) & 1) continue;
                for(int k = 0; k < p[j]; k++){
                    total += (j + 1) * 100;
                    cnt++;
                    if(total >= G){
                        f = true;
                        break;
                    }
                }
                total += c[j];
                if(total >= G){
                    f = true;
                }
                if(f) break;
            }
        }
        mini = min(mini, cnt);
    }

    cout << mini << endl;

    return 0;
}