#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b, k;
    cin >> a >> b >> k;

    int cnt = 0;
    for(int i = min(a, b); i >= 1;i--){
        if(a % i == 0 and b % i ==0) cnt++;
        if(cnt == k){
            cout << i << endl;
            return 0;
        }
    }



    return 0;
}