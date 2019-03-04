#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b, c;
    cin >> a >> b >> c;
    cout << min(c, b / a) << endl;

    return 0;
}