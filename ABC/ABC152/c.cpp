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

    int mi = A[0], ans = 1;
    for(int i = 1; i < n; i++){
        if(mi >= A[i]){
            ans++;
            mi = A[i];
        }
    }

    cout << ans << endl;

    return 0;
}