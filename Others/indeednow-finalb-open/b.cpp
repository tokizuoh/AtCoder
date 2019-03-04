#include <bits/stdc++.h>
using namespace std;

int A[200020];

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> S(n), T(n);
    for(int i = 0; i < n; i++){
        cin >> S[i] >> T[i];
        A[S[i]]++;
        A[T[i] + 1]--;
    }

    for(int i = 1; i <= n * n + 1; i++){
        A[i] += A[i - 1];
    }

    for(int i = 0; i <= n + n + 1; i++){
        cout << A[i] << ' ';
    }
    cout << endl;

    for(int i = 0; i < n; i++){
        int a = A[T[i]] - A[S[i] - 1] - 1;
        cout << a << endl;
    }

    return 0;
}