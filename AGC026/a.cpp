#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> A(n);
    REP(i, n) cin >> A[i];

    int ans = 0, tmp, same_cnt = 1;
    for(int i = 0; i < n; i++){
        if(i > 0){
            if(A[i] == tmp){
                same_cnt++;
            }else{
                ans += same_cnt / 2;
                same_cnt = 1;
            }
        }
        tmp = A[i];
        if(i == n - 1){
            ans += same_cnt / 2;
        }
    }
    cout << ans << endl;

    return 0;
}