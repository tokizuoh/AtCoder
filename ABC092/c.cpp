#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> A, B(n);
    REP(i, n){
        int a;
        cin >> a;
        A.push_back(a);
        B[i] = a;
    }

    sort(A.begin(), A.end());
    A.insert(A.begin(), 0);
    A.push_back(0);


    int absTotal = 0;
    for(int i = 1; i < n + 2; i++){
        absTotal += abs(A[i] - A[i - 1]);
    }

    REP(i, n){
        int idx = lower_bound(A.begin(), A.end(), B[i]) - A.begin();
        if(A[idx - 1] <= A[idx] and A[idx] <= A[idx + 1]){
            cout << absTotal << endl;
        }else{
            if(A[idx - 1] == 0){
                cout << absTotal - A[idx - 1] << endl;
            }else{
                cout <<  << endl;
            }
        }
    }

    return 0;
}