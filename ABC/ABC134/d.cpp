#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> A(n + 1);
    for(int i = 0; i < n; i++){
        cin >> A[i + 1];
    }

    int m = 0;
    for(int i = n; i > 0; i--){
        for(int j = i + i; j <= n; j += i){
            A[i] ^= A[j];
        }
        if(A[i]) m++;
    }

    cout << m << endl;
    for(int i = 1; i <= n; i++){
        if(A[i]) cout << i << ' ';
    }

    return 0;
}