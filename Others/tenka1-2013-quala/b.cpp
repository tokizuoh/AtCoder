#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int cost = 0;
        for(int j = 0; j < 5; j++){
            int a;
            cin >> a;
            cost += a;
        }
        if(cost < 20) ans++;
    }

    cout << ans << endl;

    return 0;
}