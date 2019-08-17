#include <bits/stdc++.h>
using namespace std;

const long long dx[8] = {-1, 1, -1, -1, -1, 1, 1, 1};
const long long dy[8] = {-1, -1, 1, -1, 1, -1, 1, 1};
const long long dz[8] = {-1, -1, -1, 1, 1, 1, -1, 1};

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<long long> X(n), Y(n), Z(n);
    for(int i = 0; i < n; i++){
        cin >> X[i] >> Y[i] >> Z[i];
    }

    long long ans = 0;
    for(int i = 0; i < 8; i++){
        vector<long long> A(n);
        for(int j = 0; j < n; j++){
            A[j] = X[j] * dx[i] + Y[j] * dy[i] + Z[j] * dz[i]; 
        }
        sort(A.begin(), A.end(), greater<long long>());
        
        long long t = 0;
        for(int j = 0; j < m; j++){
            t += A[j];
        }

        ans = max(ans, t);
    }
    
    cout << ans << endl;

    return 0;
}