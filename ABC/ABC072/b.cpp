#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    string ans = "";
    for(int i = 0; i < s.size(); i += 2){
        ans += s[i];
    }
    cout << ans << endl;

    return 0;
}