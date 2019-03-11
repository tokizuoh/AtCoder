#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    reverse(s.begin(), s.end());
    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] == 'A' and s[i + 1] == 'W'){
            s[i] = 'C';
            s[i + 1] = 'A';
        }
    }
    reverse(s.begin(), s.end());

    cout << s << endl;

    return 0;
}