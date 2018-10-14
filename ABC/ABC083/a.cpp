#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int l, r;
    l = a + b;
    r = c + d;

    string m = "";
    if(l > r) m = "Left";
    else if(l == r) m = "Balanced";
    else m = "Right";

    cout << m << endl;

    return 0;
}