#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n = 10;
    vector<int> A(n), B(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    for(int i = 0; i < n; i++){
        cin >> B[i];
    }

    sort(A.rbegin(), A.rend());
    sort(B.rbegin(), B.rend());

    int a = 0, b = 0;
    for(int i = 0; i < 3; i++){
        a += A[i];
        b += B[i];
    }

    cout << a << ' ' << b << endl;


    return 0;
}