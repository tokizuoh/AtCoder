#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, y;
    cin >> n >> y;

    REP(i, n + 1){
        REP(j, n + 1){
            if((n - i - j) >= 0){
                if(i * 10000 + j * 5000 + (n - i - j) * 1000 == y){
                    cout << i << " " << j << " " << n - i - j << endl;
                    return 0;
                }
            }
        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl;


    return 0;
}