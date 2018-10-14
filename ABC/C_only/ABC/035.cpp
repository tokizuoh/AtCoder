#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, q;
    cin >> n >> q;
    
    vector<int> A(n + 1, 0);
    REP(i, q){
        int l, r;
        cin >> l >> r;
        A[l - 1]++;
        A[r]--;
    }

    REP(i, n + 1){
        if(i) A[i] += A[i - 1];
    }

    REP(i, n){
        cout << A[i] % 2;
    }
    cout << endl;

    return 0;
}