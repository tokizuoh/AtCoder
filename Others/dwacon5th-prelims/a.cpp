#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    double n;
    double total = 0;
    cin >> n;
    vector<double> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
        total += A[i];
    }

    double mid = total / n;
    double d = 1e9;
    bool f = false;
    for(int i = 0; i < n; i++){
        double t = abs(A[i] - mid);
        d = min(d, t);
    }

    for(int i = 0; i < n; i++){
        double t = abs(A[i] - mid);
        if(t == d){
            cout << i << endl;
            return 0;
        }
    }


    return 0;
}
