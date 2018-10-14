#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, x;
    cin >> n >> x;

    int maxi1 = -1e9;
    map<int, pair<int, int>> mp;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        mp[a * b] = {a, b};
        maxi1 = max(maxi1, a * b);
    }

    vector<pair<int, int>> A;
    for(auto y : mp){
        if(y.first == maxi1){
            A.push_back({y.second.first, y.second.second});
        }
    }

    int maxi2 = -1e9, ta, tb;
    for(auto y : A){
        int tmp = (y.first + x) * y.second;
        if(tmp > maxi2){
            ta = y.first;
            tb = y.second;
            maxi2 = tmp;
        }
    }

    int ans = 0;
    bool f = true;
    for(auto y : mp){
        if(y.second.first == ta and y.second.second == tb and f){
            ans += maxi2;
            f = false;
        }else{
            ans += y.first;
        }
    }

    cout << ans << endl;

    return 0;
}