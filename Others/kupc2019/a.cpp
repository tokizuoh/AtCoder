#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, x;
    cin >> n >> x;

    int ma = 0;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
        ma = max(ma, A[i]);
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        if(A[i] + x >= ma){
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}