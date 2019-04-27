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

    long long ans = 1, cnt = 1;
    for(int i = 1; i < n; i++){
        if(A[i - 1] < A[i]) cnt++;
        else cnt = 1;
        ans += cnt;
    }

    cout << ans << endl;

    return 0;
}