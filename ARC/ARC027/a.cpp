#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h, m;
    cin >> h >> m;

    cout << (17 - h) * 60 + 60 - m << endl;

    return 0;
}