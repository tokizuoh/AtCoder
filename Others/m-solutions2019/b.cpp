#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    int l = 0;
    for(int i = 0; i < (int)s.size(); i++){
        l += (s[i] == 'x');
    }

    if(l > 7){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }

    return 0;
}