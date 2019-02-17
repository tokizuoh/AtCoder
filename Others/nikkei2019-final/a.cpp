#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<long long> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    vector<long long> B(n + 1, 0);
    for(int i = 0; i < n; i++){
        B[i + 1] = A[i] + B[i];
    }

    for(int i = 0; i < n; i++){
        long long maxi = -1e18;
        for(int j = i + 1; j < n + 1; j++){
            maxi = max(maxi, B[j] - B[j - i - 1]);
        }
        cout << maxi << endl;
    }

    return 0;
}