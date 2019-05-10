#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    string ans = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A') ans += 'O';
        else if(s[i] == 'O') ans += 'A';
        else ans += s[i];
    }

    cout << ans << endl;

    return 0;
}