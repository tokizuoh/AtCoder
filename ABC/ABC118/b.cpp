#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<int> A(m, 0);
    
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        for(int j = 0; j < k; j++){
            int a;
            cin >> a;
            A[a - 1]++;
        }
    }

    int ans = 0;
    for(int i = 0; i < m; i++){
        if(A[i] == n) ans++;
    }

    cout << ans << endl;

    return 0;
}