#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long a, b, x;
    cin >> a >> b >> x;

    cout << b / x - (a + x - 1) / x + 1<< endl;

    return 0;
}