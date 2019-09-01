#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    string s, t;
    cin >> s >> t;
    int ans = 0;
    for(int i = 0; i < 3; i++){
        if(s[i] == t[i]){
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}