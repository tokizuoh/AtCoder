#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

long long MOD = 1e9 + 7;

int comb(int a, int b){
    if(b * 2 > a) b = a - b;
    int x = 1, y = 1;
    for(int i = 1; i <= b; i++){
        x = (x * (a - i + 1)) % MOD;
        y = (y * i) % MOD;
    }
    return (x / y) % MOD;
}

int fact(int a){
    int cost = 1;
    for(int i = a; i >= 2; i--){
        cost = (cost * i) % MOD;
    }
    return cost % MOD;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    if(m == 1){
        cout << 1 << endl;
        return 0;
    }

    map<int, int> mp;
    int tmp = m;
    for(int i = 2; i <= (int)(sqrt(m)); i++){
        if(tmp % i) continue;
        else{
            while(tmp % i == 0){
                mp[i]++;
                tmp /= i;
            }
        }
        if(tmp == 1) break;
    }
    
    int dsum = 1; //約数の個数
    for(auto x : mp){
        dsum = (dsum * (x.second + 1)) % MOD;
    }

    int ans = 0;
    for(int i = n - 1; i >= 1; i--){
        ans = ans + n - dsum
    }
    


    return 0;
}