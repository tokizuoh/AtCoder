#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int x, y;
    cin >> x >> y;

    if((x + y) % 4){
        cout << "No" << endl;
        return 0;
    }

    int k = (x + y) / 4;
    x -= k;
    y -= k;

    if((x % 2 == 0) && (y % 2 == 0) && (x >= 0) &&(y >= 0)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}