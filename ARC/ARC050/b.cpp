#include <bits/stdc++.h>
using namespace std;

long long R, B, x, y;

bool check(long long k){
    // 花束の個数が赤い花か青い花の本数を越えたら花束は作れない（それはそう）
    if(k > R or k > B) return false;
    
    // ひとまず，赤い花と青い花を一本ずつ合わせてペアをつくる
    //
    // k個ペアを作った場合，赤い花の残りと青い花の残りの本数は，
    // それぞれ(R - k)本，(B - k)本となる
    //
    // 残りのうち(x - 1)本の赤い花，(y - 1)の青い花を作成済みのペアに
    // それぞれ可能な限り分配する(*)　-1しているのはすでにk個のペアに配布しているため
    //
    // (*)をそれぞれmR，mBとしたとき，mR + mBがk以下の場合は条件を満たす
    long long mR, mB;
    mR = (R - k) / (x - 1);
    mB = (B - k) / (y - 1);
    return (mR + mB) >= k;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> R >> B >> x >> y;

    long long ok = 0, ng = 1e18;
    while(ng - ok > 1){
        long long mid = (ok + ng) / 2;
        if(check(mid)) ok = mid;
        else ng = mid;
    }

    cout << ok << endl;

    return 0;
}