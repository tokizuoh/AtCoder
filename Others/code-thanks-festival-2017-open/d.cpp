#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    
    if(m % n == 0){
        cout << 0 << endl;
        return 0;
    }

    int ans = m * ((m + n - 1) / n) % n;
    cout << ans << endl;

    return 0;
}