#include <bits/stdc++.h>
using namespace std;

long long n, k, ans = 1e9;
long long A[35];

vector<long long> Coin;

void dfs(long long now, long long cnt, long long total){
    if(cnt == k){
        long long cc = 0; // coin_count
        for(long long i = 0; i < Coin.size(); i++){
            if(Coin[i] > total) continue;
            while(total - Coin[i] >= 0){
                cc++;
                total -= Coin[i];
            }
        }
        ans = min(ans, cc);
    }else{
        for(long long i = 0; i < n; i++){
            if(now + 1 + i < n){
                dfs(now + 1 + i, cnt + 1, total + A[now + i + 1]);
            }
        }
    }
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    cin >> n >> k;
    for(long long i = 0; i < n; i++){
        cin >> A[i];
    }

    for(long long i = 0; i < 9; i++){
        Coin.push_back((long long)pow(10, i));
        Coin.push_back((long long)(5 * pow(10, i)));
    }

    sort(Coin.rbegin(), Coin.rend());

    for(long long i = 0; i < n; i++){
        dfs(i, 1, A[i]);
    }

    cout << ans << endl;

    return 0;
}
