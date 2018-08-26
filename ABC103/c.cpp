#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    
    long long cost = 0;
    REP(i, n){
        int a;
        cin >> a;
        cost += a - 1;
    }
    cout << cost << endl;

    return 0;
}