#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    int r = m % n;
    if(r == 0){
        int ans = m / n;
        cout << ans << endl; 
        return 0;
    }

    for(int i = m / n; i >= 1; i--){
        if((m - i) % i == 0){
            cout << i << endl;
            return 0;
        }
    }
    cout << 1 << endl;

    return 0;
}