#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int r;
    cin >> r;
    
    string m = "";
    if(r < 1200) m = "ABC";
    else if(r < 2800) m = "ARC";
    else m = "AGC";

    cout << m << endl;

    return 0;
}