#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<double> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    sort(A.begin(), A.end());
    double now = 0;
    for(int i = 0; i < n; i++){
        if(i == 0){
            now = (A[i] + A[i + 1]) / 2;
            i++;
        }else{
            now = (A[i] + now) / 2;
        }
    }

    cout << fixed << std::setprecision(10) << now << endl;

    return 0;
}