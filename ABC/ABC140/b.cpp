#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> A(n);
    // vector<int> B(n);
    // vector<int> C(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
        A[i]--;
    }
    map<int, int> B;
    for(int i = 0; i < n; i++){
        int b;
        cin >> b;
        B[i] = b;
    }
    map<int, int> C;
    for(int i = 0; i < n - 1; i++){
        int c;
        cin >> c;
        C[i] = c;
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        if(i == 0){
            ans += B[A[i]];
            continue;
        }
        ans += B[A[i]];
        if(A[i - 1] + 1 == A[i]){
            ans += C[A[i - 1]];
        }
    }
    
    cout << ans << endl;

    return 0;
}