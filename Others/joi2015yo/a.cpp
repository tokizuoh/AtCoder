#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n = 5;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    int a = A[4] * A[0];
    int b = A[1] + (A[4] <= A[2] ? 0 : (A[4] - A[2]) * A[3]);

    cout << min(a, b) << endl;

    return 0;
}