#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    long long k;
    cin >> n >> k;

    map<int, long long> mp;
    for(int i = 0; i < n; i++){
        int a;
        long long b;
        cin >> a >> b;
        mp[a] += b;
    }

    long long total = 0;
    for(auto x : mp){
        total += x.second;
        if(total >= k){
            cout << x.first << endl;
            return 0;
        }
    }

    return 0;
}