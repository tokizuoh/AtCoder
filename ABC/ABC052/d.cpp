#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long n, a, b;
    cin >> n >> a >> b;
    vector<long long> X(n);
    for(int i = 0; i < n; i++){
        cin >> X[i];
    }

    long long ans = 0;
    for(int i = 1; i < n; i++){
        ans += min((X[i] - X[i - 1]) * a, b);
    }

    cout << ans << endl;

    return 0;
}