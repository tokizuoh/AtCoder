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

    for(int i = 0; i < k; i++){
        if(s[i] != '1'){
            cout << s[i] << endl;
            return 0;
        }
    }
    cout << '1' << endl;

    return 0;
}