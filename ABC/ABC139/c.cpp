#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    int now = A[0], ans = 0, cnt = 0;
    for(int i = 1; i < n; i++){
        if(now >= A[i]){
            cnt += 1;
            ans = max(ans, cnt);
            now = A[i];
        }else{
            ans = max(ans, cnt);
            cnt = 0;
            now = A[i];
        }
    }

    cout << ans << endl;

    return 0;
}