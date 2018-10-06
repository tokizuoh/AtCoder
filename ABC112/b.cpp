#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, T, ans = 1e9;
    cin >> N >> T;
    REP(i, N){
        int c, t;
        cin >> c >> t;
        if(t > T) continue;
        if(T >= t){
            ans = min(ans, c);
        }
    }
    if(ans == 1e9){
        cout << "TLE" << endl;
    }else{
        cout << ans << endl;
    }

    return 0;
}