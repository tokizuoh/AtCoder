#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    int total = 0;
    REP(i, n){
        int a;
        cin >> a;
        total += a;
        if(total >= k){
            cout << i + 1 << endl;
            return 0;
        }
    }

    return 0;
}