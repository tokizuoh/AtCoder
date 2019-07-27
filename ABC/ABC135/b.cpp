#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> A(n), B(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
        B[i] = A[i];
    }

    sort(A.begin(), A.end());

    int d = 0;
    for(int i = 0; i < n; i++){
        if(A[i] != B[i]) d++;
    }

    if(d <= 2) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}