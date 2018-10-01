#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int gcd(int a, int b){
    if(a < b) swap(a, b);
    int d, r;
    r = a % b;
    return (r > 0 ? gcd(b, r) : b);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, x;
    cin >> n >> x;
    vector<int> A(n + 1);
    REP(i, n) cin >> A[i];
    A[n] = x;
    sort(A.begin(), A.end());

    int g = A[1] - A[0];
    for(int i = 1; i < n; i++){
        g = gcd(g, A[i + 1] - A[i]);
    }

    cout << g << endl;

    return 0;
}