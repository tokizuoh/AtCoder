#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long n, p;
    cin >> n >> p;

    if(n == 1){
        cout << p << endl;
        return 0;
    }

    long long tmp = p;

    map<long long, long long> mp;
    for(long long i = 2; i * i <= p; i++){
        if(tmp == 1) break;
        if(tmp % i == 0){
            long long cnt = 0;
            while(tmp % i == 0){
                tmp /= i;
                cnt++;
            }
            mp[i] = cnt;
        }
    }

    long long ans = 1;
    for(auto x : mp){
        for(int i = 0; i < x.second / n; i++){
            ans *= x.first;
        }
    }

    cout << ans << endl;

    return 0;
}