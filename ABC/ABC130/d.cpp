#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    long long k;
    cin >> n >> k;
    vector<long long> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    long long s = 0, ans = 0;
    int j = 0;
    for(int i = 0; i < n; i++){
        while(j < n and s + A[j] < k){
            s += A[j];
            j++;
        }
        ans += j - i;
        s -= A[i];
    }

    cout << (long long)n * ((long long)n + 1) / 2 - ans << endl;

    return 0;
}