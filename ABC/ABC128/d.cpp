#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    vector<int> V(n);
    for(int i = 0; i < n; i++){
        cin >> V[i];
    }

    int ans = 0;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n - i; j++){
            if((i + j) > k) continue;
            vector<int> A;
            for(int a = 0; a < i; a++){
                A.push_back(V[a]);
            }
            for(int b = 0; b < j; b++){
                A.push_back(V[n - b - 1]);
            }
            sort(A.begin(), A.end());
            for(int l = 0; l < min(k - (i + j), (int)A.size()); l++){
                if(A[l] < 0) A[l] = 0;
                else break;
            }
            int t = 0;
            for(int l = 0; l < A.size(); l++){
                t += A[l];
            }
            ans = max(ans, t);
        }
    }

    cout << ans << endl;

    return 0;
}