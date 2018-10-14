#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> A(n), B(n);
    REP(i, n){
        cin >> A[i];
        B[i] = A[i];
    }
    
    sort(A.begin(), A.end());
    
    REP(i, n){
        int idx = lower_bound(A.begin(), A.end(), B[i]) - A.begin();
        if(idx < n / 2){
            cout << A[n / 2] << endl;
        }else{
            cout << A[n / 2 - 1] << endl;
        }
    }
    
    return 0;
}