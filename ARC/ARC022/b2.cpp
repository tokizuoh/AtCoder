#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    unordered_map<int, bool> mp;
    int l = 0, r = 0, ans = 0;
    while(l <= r and r < n){
        if(!mp[A[r]]){
            mp[A[r]] = true;
            ans = max(ans, r - l + 1);
            r++;
        }else{
            mp[A[l]] = false;
            l++;
        }
    }

    cout << ans << endl;

    return 0;
}