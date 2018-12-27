#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int y, m, d;
    cin >> y >> m >> d;

    if(m != 12 or d != 25){
        cout << "NOT CHRISTMAS DAY" << endl;
        return 0;
    }

    cout << y - 2018 << endl;


    return 0;
}