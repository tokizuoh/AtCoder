#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long x;
    cin >> x;

    long long y = 0, at = 1;
    while(true){
        y += at;
        if(y >= x){
            cout << at << endl;
            return 0;
        }
        at++;
    }

    return 0;
}