#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

long long gcd(long long a, long long b){
    if(a < b) swap(a, b);
    long long r = a % b;
    return (r > 0 ? gcd(b, r) : b);
}

long long lcm(long long a, long long b){
    return a / gcd(a, b) * b;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long n, m;
    cin >> n >> m;
    
    long long l = lcm(n, m);
    //long long t = lcm(l / n, l / m);

    for(long long i = 0; i < l; i += l / n){
        
    }


    return 0;
}