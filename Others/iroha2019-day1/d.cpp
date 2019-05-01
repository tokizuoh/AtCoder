#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, x, y;
    cin >> n >> x >> y;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    
    sort(A.rbegin(), A.rend());

    for(int i = 0; i < n; i++){
        if(i % 2 == 0) x += A[i];
        else y += A[i];
    }

    if(x == y) cout << "Draw" << endl;
    else if(x > y) cout << "Takahashi" << endl;
    else cout << "Aoki" << endl;

    return 0;
}