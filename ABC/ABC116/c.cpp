#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> h(n);
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }

    int ans = 0, active = 0;
    for(int i = 0; i < n; i++){
        if(active < h[i]){
            ans += h[i] - active;
        }
        active = h[i];
    }

    cout << ans << endl;

    return 0;
}