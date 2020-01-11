#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int k, x;
    cin >> k >> x;

    if(500 * k >= x){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}