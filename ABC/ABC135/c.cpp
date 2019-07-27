#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<long long> A(n + 1), B(n);
    for(int i = 0; i < n + 1; i++){
        cin >> A[i];
    }
    for(int i = 0; i < n; i++){
        cin >> B[i];
    }

    long long ans = 0, bef = 0;
    for(int i = 0; i < n; i++){
        // ans += max(A[i], B[i]);
        if(A[i] >= B[i]){
            ans += B[i];
            B[i] = 0;
        }else{
            ans += A[i];
            B[i] -= A[i];
        }

        if(A[i + 1] >= B[i]){
            ans += B[i];
            A[i + 1] -= B[i];
        }else{
            ans += A[i + 1];
            A[i + 1] = 0;
        }
    }

    cout << ans << endl;

    return 0;
}