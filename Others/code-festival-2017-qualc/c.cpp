#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    int n = s.size();

    int l = 0, r = n - 1, cnt = 0;
    while(l <= r){
        if(l == r) break;
        if(s[l] == s[r]){
            l++;
            r--;
        }else if(s[l] == 'x'){
            l++;
            cnt++;
        }else if(s[r] == 'x'){
            r--;
            cnt++;
        }else{
            cout << -1 << endl;
            return 0;
        }
    }

    cout << cnt << endl;

    return 0;
}