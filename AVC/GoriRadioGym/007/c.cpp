#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, x;
    cin >> n >> x;
    vector<long long> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    long long cost = 0;
    for(int i = 1; i < n; i++){
        if(A[i - 1] + A[i] > x){
            cost += A[i - 1] + A[i] - x;
            A[i] -= A[i - 1] + A[i] - x;
            A[i] = max(0LL, A[i]);
        }
    }

    cout << cost << endl;

    return 0;
}