#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    int t = 1;
    for(int i = 0; i < n; i++){
        if(t * 2 > t + k){
            t += k;
        }else{
            t *= 2;
        }
    }

    cout << t << endl;

    return 0;
}