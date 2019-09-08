#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> B(n - 1);
    for(int i = 0; i < n - 1; i++){
        cin >> B[i];
    }

    vector<int> A(n + 10, 0);
    for(int i = 0; i < n - 1; i++){
        if(i == 0){
            A[i] = B[i];
            A[i + 1] = B[i];
        }else{
            if(A[i] > B[i]){
                A[i] = B[i];
                A[i + 1] = B[i]; 
            }else{
                // A[i] = B[i];
                A[i + 1] = B[i];
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        ans += A[i];
    }

    cout << ans << endl;

    return 0;
}