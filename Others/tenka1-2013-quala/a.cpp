#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int num = 42;
    while(num < 130000000){
        num = num + num;
    }

    cout << num << endl;

    return 0;
}