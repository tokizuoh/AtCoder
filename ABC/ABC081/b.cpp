#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    
    int ans = 1e9;
    REP(i, n){
        int a, cnt = 0;
        cin >> a;
        while(!(a % 2)){
            a /= 2;
            cnt++;
        }
        ans = min(ans, cnt);
    }
    cout << ans << endl;

    return 0;
}