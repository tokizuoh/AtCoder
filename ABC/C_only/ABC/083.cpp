#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long x, y;
    cin >> x >> y;

    int cnt = 1;
    while(x * 2 <= y){
        x *= 2;
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}