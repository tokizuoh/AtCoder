#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    int ans = 1;
    int bef = A[0];
    for(int i = 1; i < n; i++){
        if(bef < A[i]){
            ans++;
            bef = A[i];
        }
    }

    cout << ans << endl;

    return 0;
}