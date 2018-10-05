#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, total = 0;
    cin >> n;
    vector<int> A(n);
    REP(i, n){
        cin >> A[i];
        total += A[i];
    }

    int mid, ave1, ave2;
    if(n % 2) mid = A[n / 2];
    else mid = (A[n / 2] + A[n / 2 - 1]) / 2;
    ave1 = total / n;
    ave2 = (total + n - 1) / n;

    int cost1 = 0, cost2 = 0, cost3 = 0;
    REP(i, n){
        cost1 += (A[i] - mid) * (A[i] - mid);
        cost2 += (A[i] - ave1) * (A[i] - ave1);
        cost3 += (A[i] - ave2) * (A[i] - ave2);
    }

    cout << min(min(cost1, cost2), cost3) << endl;

    return 0;
}