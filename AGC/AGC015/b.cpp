#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    int n = s.size();
    long long ans = 0;
    REP(i, n){
        if(s[i] == 'U'){
            ans += (n - i - 1);
            ans += i * 2;
        }else{
            ans += (n - i - 1) * 2;
            ans += i;
        }
    }
    cout << ans << endl;

    return 0;
}