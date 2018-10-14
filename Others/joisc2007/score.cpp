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
    sort(A.begin(), A.end(), greater<int>());
    REP(i, n){
        REP(j, n){
            if(B[i] == A[j]){
                cout << j + 1 << endl;
                break;
            }
        }
    }

    return 0;
}