#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    long long k;
    cin >> n >> k;
    vector<long long> A(n);
    bool zero = false;
    for(int i = 0; i < n; i++){
        cin >> A[i];
        if(A[i] == 0) zero = true;
    }

    if(zero){
        cout << n << endl;
        return 0;
    }
    if(k == 0){
        cout << 0 << endl;
        return 0;
    }

    int left = 0, ans = 0;
    long long p = 1;
    for(int right = 0; right < n; right++){
        p *= A[right];
        while(p > k){
            p /= A[left];
            left++;
        }
        ans = max(ans, right - left + 1);
    }

    cout << ans << endl;

    return 0;
}