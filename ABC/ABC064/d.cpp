#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    string s;
    cin >> s;

    int op = 0, mi = 1e9;
    for(int i = 0; i < n; i++){
        if(s[i] == '(') op++;
        else op--;
        mi = min(mi, op);
    }

    for(int i = 0; i < -mi; i++){
        s = '(' + s;
        op++;
    }
    for(int i = 0; i < op; i++){
        s += ')';
    }

    cout << s << endl;

    return 0;
}