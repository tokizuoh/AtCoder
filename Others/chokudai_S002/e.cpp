#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    long long ans = 0;
    for(int i = 0; i < n; i++){
        long long a, b;
        cin >> a >> b;
        ans += min(a / 2, b);
    }

    cout << ans << endl;

    return 0;
}