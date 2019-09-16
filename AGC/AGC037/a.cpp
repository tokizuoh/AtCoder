#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    int ans = 1;
    char bef = s[0];
    for(int i = 1; i < s.size(); i++){
        if(i == s.size() - 1 && s[i] == bef){
            break;
        }
        if(bef == s[i]){
            i++;
            bef = '1';
        }else{
            bef = s[i];
        }
        ans++;
    }

    cout << ans << endl;

    return 0;
}