#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, x;
    cin >> n >> x;
    vector<int> L(n);
    for(int i = 0; i < n; i++){
        cin >> L[i];
    }

    int now = 0, ans = 1;
    for(int i = 0; i < n; i++){
        if(now > x) break;
        now += L[i];
        if(now > x) break;
        ans++;
    }

    cout << ans << endl;

    return 0;
}