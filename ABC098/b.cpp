#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    string s;
    cin >> s;

    unordered_map<char, int> mp1, mp2;

    int ans = -1e9;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            mp1[s[j]]++;
        }
        for(int j = i; j < n; j++){
            mp2[s[j]]++;            
        }
        int cnt = 0;
        for(auto x : mp1){
            cnt += bool(mp2[x.first]);
        }
        ans = max(ans, cnt);
        mp1.clear();
        mp2.clear();
    }
    cout << ans << endl;

    return 0;
}