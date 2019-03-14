#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    
    int now = 0;
    for(int i = 0; i < k; i++){
        int a;
        cin >> a;
        if(now + a == n){
            cout << n << endl;
            return 0;
        }else if(now + a > n){
            now = 2 * n - a - now;
        }else{
            now += a;
        }
    }

    cout << now << endl;

    return 0;
}