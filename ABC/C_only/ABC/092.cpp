#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<long long> A(n);
    REP(i, n) cin >> A[i];

    long long cost = 0;
    REP(i, n){
        if(i == 0 or i == n - 1){
            cost += abs(A[i]);
        }
        if(i < n - 1){
            cost += abs(A[i + 1] - A[i]);
        }
    }
    
    REP(i, n){
        long long tmp = cost;
        if(i == 0){
            if((0 <= A[i] and A[i] <= A[i + 1]) or (0 >= A[i] and A[i] >= A[i + 1]));
            else tmp = tmp - (abs(A[i]) + abs(A[i + 1] - A[i])) + abs(A[i + 1]);
        }else if(i == n - 1){
            if((A[i - 1] <= A[i] and A[i] <= 0) or (A[i - 1] >= A[i] and A[i] >= 0));
            else tmp = tmp - (abs(A[i] - A[i - 1]) + abs(A[i])) + abs(A[i - 1]);
        }else{
            if((A[i - 1] <= A[i] and A[i] <= A[i + 1]) or (A[i - 1] >= A[i] and A[i] >= A[i + 1]));
            else tmp = tmp - (abs(A[i + 1] - A[i]) + abs(A[i] - A[i - 1])) + abs(A[i + 1] - A[i - 1]);
        }
        cout << tmp << endl;
    }

    return 0;
}
