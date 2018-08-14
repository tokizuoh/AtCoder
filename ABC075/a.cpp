#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    unordered_map<int, int> mp;
    REP(i, 3){
        int a;
        cin >> a;
        mp[a]++;
    }

    for(auto x : mp){
        if(x.second == 1){
            cout << x.first << endl;
            return 0;
        }
    }

    return 0;
}