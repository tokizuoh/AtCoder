#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> A(m);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        A[i] = {b, a};
    }
    sort(A.begin(), A.end());
    for(auto &x : A){
        swap(x.second, x.first);
    }

    int ans = 0, right = -1;
    for(auto x : A){
        if(right < x.first){
            right = x.second - 1;
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}