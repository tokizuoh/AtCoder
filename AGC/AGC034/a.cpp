#include <bits/stdc++.h>
using namespace std;

int n, a, b, c, d;
string s;

bool check(int start, int end){
    for(int i = start; i < end; i++){
        if(s[i] == '#' and s[i + 1] == '#'){
            return false;
        }
    }
    return true;
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    cin >> n >> a >> b >> c >> d;
    cin >> s;

    s = '#' + s + '#';

    bool f1 = true, f2 = true, f3 = true;

    f1 = check(a, c);
    f2 = check(b, d);
    if(d < c){
        f3 = false;
        for(int i = b - 1; i < d; i++){
            if(s[i] == '.' and s[i + 1] == '.' and s[i + 2] == '.'){
                f3 = true;
                break;
            }
        }
    }

    cout << (f1 and f2 and f3 ? "Yes" : "No") << endl;

    return 0;
}