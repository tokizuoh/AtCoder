#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long n;
    cin >> n;

    vector<long long> A(n);
    map<long long, long long> mp;
    for(long long i = 0; i < n; i++){
        long long a, b;
        cin >> a >> b;
        mp[a] = b;
        A[i] = a;
    }

    sort(A.begin(), A.end());


    long long m;
    cin >> m;
    for(long long i = 0; i < m; i++){
        long long t;
        cin >> t;
        long long l = lower_bound(A.begin(), A.end(), t) - A.begin();

        if(l < n and A[l] == t){
            cout << mp[A[l]] << endl;
            continue;
        }
        long long l1 = mp[A[max(0LL, l - 1)]] + (A[max(0LL, l - 1)] <= t ? t - A[l - 1] : 0LL);
        long long l2 = mp[A[min(n - 1, l)]] + (A[min(n - 1, l)] <= t ? t - A[min(n - 1, l)] : 0);
        cout << min(l1, l2) << endl;
    }

    return 0;
}