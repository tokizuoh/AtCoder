#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k, x, y;
    cin >> n >> k >> x >> y;

    if(n <= k){
        cout << n * x << endl;
    }else{
        cout << k * x + (n - k) * y << endl;
    }


    return 0;
}