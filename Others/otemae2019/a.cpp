#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    double a, b;
    cin >> a >> b;

    if(a + 0.5 >= b){
        cout << 1 << endl;
    }else{
        cout << 0 << endl;
    }

    return 0;
}