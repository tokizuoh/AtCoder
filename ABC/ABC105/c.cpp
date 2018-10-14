#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    if(n == 0){
        cout << 0 << endl;
        return 0;
    }

    string s = "";
    while(n != 1){
        if(n % 2){
            s += "1";
            n--;
        }else{
            s += "0";
        }
        n /= -2;
    }
    s += "1";

    reverse(s.begin(), s.end());
    
    cout << s << endl;

    return 0;
}