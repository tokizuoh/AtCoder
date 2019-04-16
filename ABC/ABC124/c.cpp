#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;
    
    int ans = 0;

    for(int i = 1; i < s.size(); i++){
        if(s[i - 1] == s[i]){
            ans++;
            if(s[i] == '0') s[i] = '1';
            else s[i] = '0';
        }
    }

    cout << ans << endl;

    return 0;
}