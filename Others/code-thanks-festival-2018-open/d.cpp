#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;
    
    int ans = 1;
    char pre = s[0];
    for(int i = 1; i < s.size(); i++){
        if(pre >= s[i]){
            pre = s[i];
            ans++;
        }
    }

    cout << ans << endl; 

    return 0;
}