#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(a < b) swap(a, b);
    return (a % b ? gcd(b, a % b) : b);
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    vector<int> L(n), R(n);
    L[0] = A[0];
    R[n - 1] = A[n - 1];
    for(int i = 0; i < n - 1; i++){
        if(i == 0) L[i + 1] = gcd(A[i], A[i + 1]);
        else L[i + 1] = gcd(L[i], A[i + 1]);
    }

    for(int i = n - 1; i >= 1; i--){
        if(i == n - 1) R[i - 1] = gcd(A[i], A[i - 1]);
        else R[i - 1] = gcd(R[i], A[i - 1]);
    }

    int maxi = 1;
    for(int i = 0; i < n; i++){
        if(i == 0){
            maxi = max(maxi, R[i + 1]);
        }else if(i == n - 1){
            maxi = max(maxi, L[i - 1]);
        }else{
            maxi = max(maxi, gcd(L[i - 1], R[i + 1]));
        }
    }

    cout << maxi << endl;

    return 0;
}