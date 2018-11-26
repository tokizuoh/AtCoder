#include <bits/stdc++.h>
using namespace std;
int MOD = 1e9 + 7;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;

    long long ans = 0;
    int idx = 0, pre = -1;
    while(idx < n){
        if(s1[idx] == s2[idx]){
            if(pre == -1){
                ans = 3;
            }else if(pre == 0){
                ans = (ans * 2) % MOD;
            }else{
                ans *= 1;
            }
            idx++;
            pre = 0;
        }else{
            if(pre == -1){
                ans = 6;
            }else if(pre == 0){
                ans = (ans * 2) % MOD;
            }else{
                ans = (ans * 3) % MOD;                
            }
            idx += 2;
            pre = 1;
        }
    }

    cout << ans << endl;

    return 0;
}