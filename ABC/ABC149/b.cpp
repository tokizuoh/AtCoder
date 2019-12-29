#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long a, b, k;
    cin >> a >> b >> k;

    if(a <= k){
        k -= a;
        a = 0;
    }else{
        a -= k;
        k = 0;
    }

    if(b <= k){
        k -= b;
        b = 0;
    }else{
        b -= k;
        k = 0;
    }

    cout << a << ' ' << b << endl;

    return 0;
}