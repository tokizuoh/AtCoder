#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int H, W;
    cin >> H >> W;
    int h, w;
    cin >> h >> w;

    int ans = H * W - h * W - w * H + h * w;
    cout << ans << endl;

    return 0;
}