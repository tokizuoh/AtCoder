#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;
    long long k;
    cin >> k;

    REP(i, min(k, (long long)(s.size()))){
        if(s[i] == '1') continue;
        else{
            cout << s[i] << endl;
            return 0;
        }
    }

    cout << '1' << endl; 

    return 0;
}