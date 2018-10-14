#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    
    int cost = 0;
    REP(i, n){
        int x;
        cin >> x;
        cost += min(x, k - x) * 2;
    }

    cout << cost << endl;

    return 0;
}