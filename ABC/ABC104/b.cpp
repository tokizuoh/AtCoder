#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    if(s[0] != 'A'){
        cout << "WA" << endl;
        return 0;
    }

    int c_cnt = 0, idx;
    for(int i = 2; i <= s.size() -2; i++){
        if(s[i] == 'C'){
            c_cnt++;
            idx = i;
        }
        if(c_cnt > 1){
            cout << "WA" << endl;
            return 0;
        }
    }

    if(c_cnt == 0){
        cout << "WA" << endl;
        return 0;
    }

    for(int i = 1; i < s.size(); i++){
        if(i == idx) continue;
        if('A' < s[i] and s[i] <= 'Z'){
            cout << "WA" << endl;
            return 0;
        }
    }

    cout << "AC" << endl;

    return 0;
}