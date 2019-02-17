#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        string s = "";
        if(i % 2 == 0) s += 'a';
        if(i % 3 == 0) s += 'b';
        if(i % 4 == 0) s += 'c';
        if(i % 5 == 0) s += 'd';
        if(i % 6 == 0) s += 'e';
        
        if(s == "") cout << i << endl;
        else cout << s << endl;
    }

    return 0;
}