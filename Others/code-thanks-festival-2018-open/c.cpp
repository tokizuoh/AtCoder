#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<long long> X(n);
    for(int i = 0; i < n; i++){
        cin >> X[i];
    }
    sort(X.begin(), X.end());

    long long ans = 0;
    long long pre = 0;
    for(int i = 1; i < n; i++){
        long long len = (X[i] - X[i - 1]) * i;
        ans += pre + len;
        pre += len;
        // << "ans : " << ans << " | pre : " << pre << " | len : " << len << endl;
    }

    cout << ans << endl;

    return 0;
}