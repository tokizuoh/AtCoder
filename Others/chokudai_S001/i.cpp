#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    int ans = 0, right = 0, now = 0;
    for(int left = 0; left < n; left++){
        while(right < n and now < n){
            now += A[right];
            right++;
        }
        if(now == n) ans++;
        now -= A[left];
    }

    cout << ans << endl;

    return 0;
}