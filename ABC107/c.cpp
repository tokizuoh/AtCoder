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

    /*
    int total = 0, bt = abs(A[0]), at = abs(A[k - 1]);
    REP(i, k){
        if(i) total += A[i] - A[i - 1];
    }
    total += min(bt, at);

    for(int i = k; i < n; i++){
        bt = A[1];
        at = 
    }
    */

    int cost = 0, tmp;
    for(int i = 0; i <= n - k; i++){
        if(i == 0){
            for(int j = 0; j < k; j++){
                if(j) cost += A[j] - A[j - 1];
            }
            cost += min(abs(A[i]), abs(A[k - 1]));
        }else{
            tmp = cost;
            tmp -= A[i] - A[i - 1];
            tmp += A[i + k - 1] - A[i + k - 2];
            tmp += min(abs(A[i]), abs(A[i + k - 1]));
            cost = min(cost, tmp);
        }
        cout << cost << endl;
    }
    cout << cost << endl;


    return 0;
}