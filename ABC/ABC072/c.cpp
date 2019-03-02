#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        mp[a-1]++;
        mp[a]++;
        mp[a+1]++;
    }

    int ans = -1e9;
    for(auto x: mp){
        ans = max(ans, x.second);
    }

    cout << ans << endl;


    return 0;
}