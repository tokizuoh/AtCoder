#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    REP(i, n) cin >> A[i];

    int ans = 1e9;
    for(int i = 0; i < n - k + 1; i++){
        int cost = 0, tmp;
        for(int j = i; j < i + k; j++){
            if(j == i);
            else cost += A[j] - tmp;
            tmp = A[j];
        }
        if(0 < A[i] or A[i + k - 1] < 0){
            cost += min(abs(A[i]), abs(A[i + k - i]));
        }
        cout << i << " " << cost<< endl;
        ans = min(ans, cost);
    }
    cout << ans << endl;

    return 0;
}