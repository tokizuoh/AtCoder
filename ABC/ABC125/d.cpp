#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long n, mc = 0, t = 0;
    bool z = false;
    cin >> n;
    vector<long long> A(n);
    for(long long i = 0; i < n; i++){
        cin >> A[i];
        if(A[i] == 0) z = true;
        if(A[i] < 0) mc++;
        t += abs(A[i]);
    }
    if(mc % 2 == 0 or z){
        cout << t << endl;
    }else{
        long long mini = 1e9;
        for(int i = 0; i < n; i++){
            mini = min(mini, abs(A[i]));
        }
        cout << t - mini * 2 << endl;
    }

    return 0;
}