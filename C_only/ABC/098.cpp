#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> A(n, 0);
    REP(i, n){
        if(s[i] == 'E'){
            A[i]++;
        }
        if(i > 0){
            A[i] += A[i - 1];
        }
    }

    int ans = 1e9;
    REP(i, n){
        if(i > 1){
            ans = min(ans, i - A[i - 1] + A[n - 1] - A[i]);
        }else{
            ans = min(ans, A[n - 1] - A[i]);
        }
    }
    cout << ans << endl;

    return 0;
}