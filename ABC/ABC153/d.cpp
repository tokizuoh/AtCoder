#include <bits/stdc++.h>
using namespace std;

long long exponentiation_by_squaring(long long a, long long b){
    if(b == 0) return 1;
    if(b % 2 == 1){
        return exponentiation_by_squaring(a, b - 1) * a;
    }else{
        long long tmp = exponentiation_by_squaring(a, b / 2);
        return tmp * tmp;
    }
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long h;
    cin >> h;

    long long cnt = 0, ans = 0;
    while(true){
        h /= 2;
        ans += exponentiation_by_squaring(2, cnt);
        cnt++;
        if(h == 0){
            break;
        } 
    }

    cout << ans << endl;

    return 0;
}