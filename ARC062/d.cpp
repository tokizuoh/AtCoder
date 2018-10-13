#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    int ans = 0;
    REP(i, s.size()){
        if(s[i] == 'p') ans--;
    }
    
    cout << ans + s.size() / 2 << endl;

    return 0;
}