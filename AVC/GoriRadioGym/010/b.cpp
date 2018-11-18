#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int k, s;
    cin >> k >> s;

    int ans = 0;
    for(int x = 0; x <= k; x++){
        for(int y = 0; y <= k; y++){
            int z = s - x - y;
            if(z < 0 or k < z){
                continue;
            }else{
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}