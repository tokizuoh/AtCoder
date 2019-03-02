#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(a < b) swap(a, b);
    int d, r;
    d = a / b;
    r = a % b;
    if(r == 0) return b;
    else return gcd(b, r);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, x;
    cin >> n >> x;
    vector<int> A(n + 1);
    A[0] = x;
    for(int i = 0; i < n; i++){
        cin >> A[i + 1];
    }

    sort(A.begin(), A.end());

    int g;
    for(int i = 1; i < n + 1; i++){
        if(i > 1){
            g = gcd(g, A[i] - A[i - 1]);
        }else{
            g = A[i] - A[i - 1];
        }
    }

    cout << g << endl;

    return 0;
}