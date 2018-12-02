#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long n, t;
    cin >> n >> t;
    vector<long long> T(n);
    for(int i = 0; i < n; i++){
        cin >> T[i];
    }

    long long ans = t;
    for(int i = 0; i < n - 1; i++){
        if(T[i] + t <= T[i + 1]){
            ans += t;
        }else{
            ans += T[i + 1] - T[i];
        }
    }

    cout << ans << endl;

    return 0;
}