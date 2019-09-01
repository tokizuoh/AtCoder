#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long n;
    cin >> n;

    long long f = n * (n - 1) / 2;
    if(n == 1){
        cout << 0 << endl;
    }else{
        cout << f << endl;
    }

    return 0;
}