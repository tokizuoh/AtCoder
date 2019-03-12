#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;
    int ans = 0;
    for(int i = 0; i < s.size() / 2; i++){
        if(s[i] == '('){
            if(s[s.size() - i - 1] == ')');
            else ans++;
            continue;
        }
        if(s[i] == ')'){
            if(s[s.size() - i - 1] == '(');
            else ans++;
            continue;
        }
        if(s[i] == s[s.size() - 1 - i]) continue;
        if(s[i] == ')' and s[s.size() - 1 - i] == '(') continue;
        if(s[i] == '(' and s[s.size() - 1 - i] == ')') continue;
        ans += 1;
    }

    if(s.size() % 2 and (s[s.size() / 2] == '(' or s[s.size() / 2] == ')')) ans++;

    cout << ans << endl;

    return 0;
}