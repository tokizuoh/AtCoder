#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, t;
    cin >> n;
    t = n;

    // 素因数分解
    map<int, int> mp;
    for(int i = 2; i * i <= n; i++){
        if(t % i != 0) continue;
        while(t % i == 0){
            mp[i]++;
            t /= i;
        }
    }
    if(t != 1) mp[t]++;

    // ok, ngの境界が明確なので二分探索可能
    int ng = 1, ok = n;
    while(ok - ng > 1){
        int mid = (ng + ok) / 2;
        bool f = true;
        // nの素因数を使って調べる
        for(auto i : mp){
            int cnt = 0;
            int x = i.first, y = i.second; // nの{prime, cnt}
            while(mid >= x){
                cnt += mid / x;
                x *= i.first;
            }
            if(cnt < y){
                f = false;
                break;
            }
        }
        if(f) ok = mid;
        else ng = mid;
    }

    cout << ok << endl;

    return 0;
}