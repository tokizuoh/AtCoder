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

    int ans = 0;
    for(int i = 1; i < n - 1; i++){
        if(A[i - 1] < A[i] and A[i] < A[i + 1]){
            ans++;
            continue;
        }
        if(A[i - 1] > A[i] and A[i] > A[i + 1]){
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}