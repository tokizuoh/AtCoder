#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int E[c][a];
    for(int i = 0; i < c; i++){
        for(int j = 0; j < a; j++){
            cin >> E[i][j];
        }
    }

    int ans = 0;
    for(int k = 0; k <= 100; k++){
        int gokaku = 0;
        for(int i = 0; i < c; i++){
            int kamoku = 0;
            for(int j = 0; j < a; j++){
                if(E[i][j] >= k){
                    kamoku++;
                }
            }
            if(kamoku >= b){
                gokaku++;
            }
        }
        if(gokaku >= d){
            if(ans <= k){
                ans = k;
            }
        }
    }
    cout << ans << endl;

    return 0;
}