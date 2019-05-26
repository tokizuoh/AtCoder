#include <bits/stdc++.h>
using namespace std;
typedef pair<int, long long> P;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    map<int, long long> mp;
    for(int i = 0; i < m; i++){
        long long b;
        int c;
        cin >> b >> c;
        mp[-c] += b;
    }

    vector<P> B((int)mp.size());
    int idx = 0;
    for(auto x : mp){
        B[idx] = {-x.first, x.second};
        idx++;
    }

    int b_i = 0;
    for(int i = 0; i < n; i++){
        if(A[i] > B[b_i].first) break;
        A[i] = B[b_i].first;
        B[b_i].second--;
        if(B[b_i].second == 0){
            b_i++;
            if(b_i == (int)B.size()){
                break;
            }
        }
    }

    long long ans = 0;
    for(int i = 0; i < n; i++){
        ans += A[i];
    }
    
    cout << ans << endl;

    return 0;
}