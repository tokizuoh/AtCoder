#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector<P> A(n);
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        A[i] = {t, i + 1};
    }

    sort(A.begin(), A.end());

    int mini;
    map<int, int> mp;
    vector<int> B(n);
    for(int i = 0; i < n; i++){
        P p = A[i];
        B[i] = p.first;
        if(i > 0){
            mini = min(mini, p.second);
            p.second = mini;
        }else{
            mini = p.second;
        }
        mp[p.first] = mini;
    }

    vector<int> C(n, 0);
    for(int i = 0; i < m; i++){
        int b;
        cin >> b;
        int idx = lower_bound(B.begin(), B.end(), b) - B.begin();
        if(b < B[idx] or idx == n) idx--;
        C[mp[B[idx]] - 1]++;
    }

    int maxi = -1e9, idx;
    for(int i = 0; i < n; i++){
        if(maxi < C[i]){
            idx = i + 1;
            maxi = max(maxi, C[i]);
        }
    }

    cout << idx << endl;

    return 0;
}