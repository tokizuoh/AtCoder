#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long n;
    cin >> n;
    string s;
    cin >> s;
    vector<long long> A(26);
    for(long long i = 0; i < n; i++){
        A[(long long )(s[i] - 'a')]++;
    }

    long long mod = 1e9 + 7, ans = 1;
    for(long long i = 0; i < 26; i++){
        if(A[i] > 0) ans = (ans * (A[i] + 1)) % mod;
    }
    ans--;

    cout << ans % mod << endl;

    return 0;
}