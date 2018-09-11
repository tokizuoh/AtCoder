#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    int d, x;
    cin >> d >> x;
    
    REP(i, n){
        int a;
        cin >> a;
        x += (d + a - 1) / a;
    }
    cout << x << endl;

    return 0;
}