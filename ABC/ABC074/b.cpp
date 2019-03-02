#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    int ans = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        ans += min(x - 0, k - x) * 2;
    }

    cout << ans << endl;

    return 0;
}