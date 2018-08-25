#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int x, a, b;
    cin >> x >> a >> b;

    string m;
    if(-1 * a + b <= x){
        m = (-1 * a + b <= 0 ? "delicious" : "safe");
    }else{
        m = "dangerous";
    }

    cout << m << endl;

    return 0;
}