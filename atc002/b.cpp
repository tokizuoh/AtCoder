#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

long long pow_mod(long long n, long long k, long long m){
    if(k == 0){
        return 1;
    }else if(k % 2 == 1){
        return pow_mod(n, k - 1, m) * n % m;
    }else{
        long long t = pow_mod(n, k / 2, m);
        return t * t % m;
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long n, m, p;
    cin >> n >> m >> p;

    cout << pow_mod(n, p, m) << endl;

    return 0;
}