#include <bits/stdc++.h>
using namespace std;

long long d(long long de){
    int res = 0;
    while(de != 0){
        de /= 10;
        res++;
    }
    return res;
}

bool f(long long a, long long b, long long m, long long x){
    long long fu = a * m + b * d(m);
    if(fu <= x) return true;
    else return false;
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long a, b, x;
    cin >> a >> b >> x;

    long long ok = 0, ng = 1000000001;

    while((ng - ok) > 1){
        long long mid = (ok + ng) / 2;
        if(f(a, b, mid, x)) ok = mid;
        else ng = mid;
    }

    cout << ok << endl;

    return 0;
}