#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long r, d, x;
    cin >> r >> d >> x;
    for(int i = 0; i < 10; i++){
        long long a = r * x - d;
        cout << a << endl;
        x = a; 
    }

    return 0;
}