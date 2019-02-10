#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    for(int i = 0; i < 3; i++){
        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        
        int x, y, z;
        if(f - c < 0){
            z = f + 60 - c;
            e--;
        }else z = f - c;
        if(e - b < 0){
            y = e + 60 - b;
            d--;
        }else y = e - b;
        cout << d - a << ' ' << y << ' ' << z << endl;
    }

    return 0;
}