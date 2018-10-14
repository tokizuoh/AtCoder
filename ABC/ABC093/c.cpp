#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    vector<int> A(3);
    REP(i, 3) cin >> A[i];

    sort(A.begin(), A.end());

    int d1 = A[2] - A[1];
    int d2 = A[2] - A[0];

    int ans = 0;
    if(d1 % 2 == d2 % 2){
        ans += d1 / 2;
        ans += d2 / 2;
        if(d1 % 2){
            ans++;
        }
    }else{
        ans++;
        if(d1 % 2) d1++;
        ans += d1 / 2;
        if(d2 % 2) d2++;
        ans += d2 / 2;
    }
    
    cout << ans << endl;    

    return 0;
}