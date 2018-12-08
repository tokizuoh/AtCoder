#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;

    int total = a + b;
    if(total >= 10){
        cout << "error" << endl;
    }else{
        cout << total << endl;
    }

    return 0;
}