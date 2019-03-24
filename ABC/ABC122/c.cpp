#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    vector<int> A(n);
    for(int i = 1; i < n; i++){
        A[i] += A[i - 1] + (s[i - 1] == 'A' and s[i] == 'C');
    }

    for(int i = 0; i < q; i++){
        int l, r;
        cin >> l >> r;
        l--; r--;
        cout << A[r] - A[l] << endl;
    }

    /*
    for(auto x : A){
        cout << x << ' ';
    }
    cout << endl;
    */

    return 0;
}