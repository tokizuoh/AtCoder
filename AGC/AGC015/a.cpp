#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long n, a, b;
    cin >> n >> a >> b;

    if(a > b){
        cout << 0 << endl;
        return 0;
    }

    long long ans = (b * (n - 1) + a) - (b + a * (n - 1)) + 1;
    cout << max(0LL, ans) << endl;

    return 0;
}