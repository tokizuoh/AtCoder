#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;
    for(int i = 0; i < n - 1; i++){
        //cout << i << endl;
        if((s[i] == 'O' && s[i + 1] == 'X') || (s[i] == 'X' && s[i + 1] == 'O')){
            ans++;
            i++;
        }
    }

    cout << ans << endl;

    return 0;
}