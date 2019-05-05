#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    sort(A.rbegin(), A.rend());

    int ans = 0;
    for(int i = 0; i < n; i++){
        ans++;
        m -= A[i];
        if(m <= 0) break;
    }

    cout << ans << endl;

    return 0;
}