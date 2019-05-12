#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int r, g, b, n;
    cin >> r >> g >> b >> n;

    int ans = 0;
    for(int i = 0; i <= n / r; i++){
        for(int j = 0; j <= n / g; j++){
            int t = i * r + j * g;
            if((n - t) % b == 0 and (n - t) >= 0){
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}