#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int a;
    cin >> a;
    string s;
    cin >> s;
    if(a >= 3200){
        cout << s << endl;
    }else{
        cout << "red" << endl;
    }

    return 0;
}