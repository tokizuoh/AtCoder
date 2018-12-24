#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long n, p;
    cin >> n >> p;
    
    map<long long, long long> mp;

    // 素因数分解
    long long tmp = p;
    for(long long i = 2; i * i <= p; i++){
        // 素因数分解が終わっていたら抜ける
        if(tmp == 1) break;
        while(tmp % i == 0){
            mp[i]++;
            tmp /= i;
        }
    }

    // pの，pの(1/2)乗以下の最大の素因数をカウント
    // ここvalueは必ず1になる
    mp[tmp]++;

    long long ans = 1;
    for(auto x : mp){
        // pの素因数をn個に均等になるべく多く分配する
        for(int i = 0; i < x.second / n; i++){
            ans *= x.first;
        }
    }

    cout << ans << endl;

    return 0;
}