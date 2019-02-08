#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n = 6, total = 0;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
        total += A[i];
    }

    int mini = 1e9;
    for(int i = 0; i < 4; i++){
        mini = min(mini, A[i]);
    }
    total -= mini;

    mini = 1e9;
    for(int i = 4; i < n; i++){
        mini = min(mini, A[i]);
    }
    total -= mini;

    cout << total << endl;


    return 0;
}