#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    int total = 0;
    for(int i = 0; i < n; i++){
        total += A[i];
        if(total > 2018){
            cout << i << endl;
            return 0;
        }
    }

    cout << n << endl;
    return 0;
}