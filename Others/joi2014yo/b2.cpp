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
        int a;
        cin >> a;
        A[i] = {a, i + 1};
    }

    sort(A.begin(), A.end());

    map<int, int> mp;
    vector<int> B(n);
    int bef;
    for(int i = 0; i < n; i++){
        B[i] = A[i].first;
        if(i > 0){
            A[i].second = min(A[i].second, bef);
            bef = A[i].second;
        }
        bef = A[i].second;
        mp[A[i].first] = A[i].second;
    }

    vector<int> C(n, 0);
    for(int i = 0; i < m; i++){
        int b;
        cin >> b;
        int idx = lower_bound(B.begin(), B.end(), b) - B.begin();
        if(idx >= n or B[idx] > b) idx--;
        C[mp[B[idx]] - 1]++;
    }

    int maxi = -1e9, idx;
    for(int i = 0; i < n; i++){
        if(C[i] > maxi){
            maxi = C[i];
            idx = i;
        }
    }

    cout << idx + 1 << endl;

    return 0;
}