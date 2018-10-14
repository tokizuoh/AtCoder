#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    string s = "";
    while(n != 0){
        if(n % (-2) != 0){
            n--;
            s += "1";
        }else{
            s += "0";
        }
        n /= -2;
    }
    if(s == "") s = "0";

    reverse(s.begin(), s.end());

    cout << s << endl;

    return 0;
}