#include <bits/stdc++.h>
using namespace std;

long long n, m, p;

// a ^ b
long long f(long long a, long long b){
    if(b == 0) return 1;
    if(b % 2 == 1) return ((f(a, b - 1) % m) * a) % m;
    else{
        long long t = f(a, b / 2) % m;
        return t * t % m;
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> m >> p;
    cout << f(n, p) << endl;

    return 0;
}