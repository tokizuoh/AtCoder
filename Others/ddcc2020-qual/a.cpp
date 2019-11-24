#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int x, y;
    cin >> x >> y;

    vector<int> A =  {300000, 200000, 100000};

    int ans = 0;
    if(x <= 3){
        ans += A[x - 1];
    }
    if(y <= 3){
        ans += A[y - 1];
    }

    if(x == 1 and y == 1){
        ans += 400000;
    }

    cout << ans << endl;

    return 0;
}