#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h, w, n;
    cin >> h >> w >> n;
    vector<int> X(n), Y(n);
    for(int i = 0; i < n; i++){
        cin >> X[i] >> Y[i];
    }

    int ans = 0;
    for(int i = 1; i < n; i++){
        int dx, dy;
        dx = X[i] - X[i - 1];
        dy = Y[i] - Y[i - 1];
        if((dx == dy) or (dx < 0 and dy < 0) or (dx > 0 and dy > 0)){
            ans += max(abs(dx), abs(dy));
        }else{
            ans += abs(dx) + abs(dy);
        }
    }

    cout << ans << endl;

    return 0;
}