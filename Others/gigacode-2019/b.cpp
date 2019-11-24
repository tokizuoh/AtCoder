#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, x, y, z;
    cin >> n >> x >> y >> z;

    int ans = 0;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        if(a >= x and b >= y and (a + b) >= z){
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}