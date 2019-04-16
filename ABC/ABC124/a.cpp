#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;
    if(a == b){
        cout << a + b << endl;
    }else{
        cout << max(a, b) + max(a, b) - 1 << endl;
    }

    return 0;
}