#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, m, c;
    cin >> n >> m >> c;
    vector<int> B(m);
    for(int i = 0; i < m; i++){
        cin >> B[i];
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        int t = 0;
        for(int j = 0; j < m; j++){
            int a;
            cin >> a;
            t += B[j] * a;
        }
        if(t + c > 0) ans++;
    }
    cout << ans << endl;

    return 0;
}