#include <bits/stdc++.h>
using namespace std;
typedef pair<long long, long long> P;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<long long> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    vector<P> B(m); // {number, maisuu} = {c, b}
    for(int i = 0; i < m; i++){
        long long b, c;
        cin >> b >> c;
        B[i] = {c, b};
    }

    sort(B.rbegin(), B.rend());

    long long ans = 0, mini = A[0];
    int left = 0;
    for(int i = 0; i < m; i++){
        if(mini >= B[i].first) break;
        int l = left, r = n;
        while((r - l) > 1){
            int mid = (r + l) / 2;
            if(A[mid] >= B[i].first) r = mid;
            else l = mid;
        }
        ans += 
    }

    return 0;
}