#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;
    if(b % a == 0){
        cout << a + b << endl;
    }else{
        cout << b - a << endl;
    }

    return 0;
}