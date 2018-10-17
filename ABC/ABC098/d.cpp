#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long N;
    cin >> N;
    vector<long long> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    int r = 0, cnt = 0;
    long long t = 0, tx = 0;
    for(int l = 0; l < n; l++){
        t += A[l];
        tx += A[l];
        while(t != tx){
            t -= A[r];
            tx ^= A[r];
            r++;
            
        }
    }



    return 0;
}