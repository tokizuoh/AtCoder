#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, s, t;
    cin >> n >> s >> t;
    if(s > t){
        cout << -1 << endl;
        return 0;
    }

    bool f = false;
    int cnt = 0;
    while(t > 0){
        if(t == s){f = true; break;}
        t /= 2;
        cnt++;
    }

    cout << (f ? cnt : -1) << endl;

    return 0;
}