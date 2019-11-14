#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;
    cout << max(a - b * 2, 0) << endl;

    return 0;
}