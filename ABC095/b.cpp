#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, x;
    cin >> n >> x;
    
    int mini = 1e9;
    REP(i, n){
        int m;
        cin >> m;
        x -= m;
        mini = min(mini, m);
    }

    cout << n + x / mini << endl;

    return 0;
}