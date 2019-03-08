#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(a < b) swap(a, b);
    int r = a % b;
    if(r == 0) return b;
    else return gcd(b, r);
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    
    sort(A.begin(), A.end());
    
    if(A[n - 1] < k){
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    int g = A[0];
    for(int i = 1; i < n; i++){
        g = gcd(g, A[i]);
    }

    if(k % g) cout << "IMPOSSIBLE" << endl;
    else cout << "POSSIBLE" << endl;

    return 0;
}