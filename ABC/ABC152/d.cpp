#include <bits/stdc++.h>
using namespace std;

int FirstDigit(int num){
    while(num > 9){
        num /= 10;
    }
    return num;
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    map<pair<int, int>, int> mp;
    for(int i = 1; i <= n; i++){
        if(i % 10 == 0) continue;
        int fd = FirstDigit(i);
        int ld = i % 10;
        mp[make_pair(fd, ld)]++;
    }

    int ans = 0;
    for(auto x: mp){
        int fd = x.first.first;
        int ld = x.first.second;
        ans += x.second * (mp[make_pair(ld, fd)]);
    }

    cout << ans << endl;

    return 0;
}