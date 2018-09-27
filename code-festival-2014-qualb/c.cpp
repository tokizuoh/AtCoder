#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string a, b, c;
    cin >> a >> b >> c;

    int n = a.size();

    vector<int> A(26, 0), B(26, 0), C(26, 0);
    REP(i, n){
        A[a[i] - 'A']++;
        B[b[i] - 'A']++;
        C[c[i] - 'A']++;
    }

    bool f = true;
    int l = 0, r = 0;
    REP(i, 26){
        //２つ合わせても錬金できない
        if(A[i] + B[i] < C[i]){
            f = false;
            break;
        }

        //
        l += max(0, C[i] - B[i]);
        r += min(A[i], C[i]);
    }
    
    if(l <= (n / 2) and (n / 2) <= r);
    else f = false;

    cout << (f ? "YES" : "NO") << endl;

    return 0;
}