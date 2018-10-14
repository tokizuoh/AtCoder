#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

long long gcd(long long a, long long b){
    return (a % b ? gcd(b, a % b) : b);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    long long x;
    REP(i, n){
        long long y;
        cin >> y;
        if(i){
            if(x < y) swap(x, y);
            x = x / gcd(x, y) * y;
        }else{
            x = y;
        }
    }

    cout << x << endl;

    return 0;
}