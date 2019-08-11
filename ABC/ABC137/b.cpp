#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int k, x;
    cin >> k >> x;
    for(int i = x - (k - 1); i <= x + (k - 1); i++){
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}