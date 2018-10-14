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
    string s, t;
    cin >> s >> t;
    
    long long l = lcm(n, m);
    long long ll = lcm(l / n, l / m);

    string a = "", b = "";
    for(long long i = 0; i < l; i += l / n){
        if(i % ll == 0) a += s[i / (l / n)];
    }
    for(long long i = 0; i < l; i += l / m){
        if(i % ll == 0) b += t[i / (l / m)];
    }
    
    cout << (a == b ? l : -1) << endl;

    return 0;
}