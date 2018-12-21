#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;
    
    long long b = 0, ans = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'B'){
            b++;
        }else{
            ans += b;
        }
    }

    cout << ans << endl;

    return 0;
}