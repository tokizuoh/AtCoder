#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    int a = 0; // ooooA
    int b = 0; // Boooo
    int c = 0; // BoooA

    int ans = 0;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        int ss = s.size() - 1;
        if(s[0] == 'B' and s[ss] == 'A') c++;
        else if(s[0] == 'B') b++;
        else if(s[ss] == 'A') a++;
        for(int j = 0; j < s.size(); j++){
            if(s[j] == 'A' and s[j + 1] == 'B'){
                ans++;
            }
        }
    }

    if(c == 0) ans += min(a, b);
    else if(a == 0 and b == 0 and c > 0) ans += c - 1;
    else ans += c + min(a, b);

    cout << ans << endl;

    return 0;
}