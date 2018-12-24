#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b, c;
    cin >> a >> b >> c;

    int total = 0, cnt = 0;
    while(true){
        cnt++;
        total += a;
        if(cnt % 7 == 0){
            total += b;
        }
        if(total >= c){
            cout << cnt << endl;
            return 0;
        }
    }

    return 0;
}