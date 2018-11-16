#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    int ans = 1e9;
    for(int i = -100; i <= 100; i++){
        int cost = 0;
        for(int j = 0; j < n; j++){
            int tmp = A[j] - i;
            cost += tmp * tmp;
        }
        ans = min(ans, cost);
    }

    cout << ans << endl; 

    return 0;
}