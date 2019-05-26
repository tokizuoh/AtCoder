#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;
    if(a >= 13){
        cout << b << endl;
    }else if(a >= 6 and a <= 12){
        cout << b / 2 << endl;
    }else{
        cout << 0 << endl;
    }

    return 0;
}