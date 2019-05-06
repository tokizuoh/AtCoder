#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int l, x;
    cin >> l >> x;

    if(x % l == 0){
        if(x / l % 2 == 0){
            cout << 0 << endl;
            return 0;
        }else{
            cout << l << endl;
            return 0;    
        }
    }

    int ans = 0;
    if((x / l) % 2){
        int hoge  = (x + l - 1) / l;
        ans = hoge * l - x;
    }else{
        ans = x % l;
    }

    cout << ans << endl;

    return 0;
}