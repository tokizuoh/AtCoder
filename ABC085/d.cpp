#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, h;
    cin >> n >> h;

    vector<pair<int, bool>> A(n), B(n + 1);
    REP(i, n){
        cin >> A[i].first >> B[i].first;
        A[i].second = true;
        B[i].second = false;
    }

    sort(A.begin(), A.end(), greater<pair<int, bool>>());

    B[n].first = A[0].first;
    B[n].second = A[0].second;

    sort(B.begin(), B.end(), greater<pair<int, bool>>());

    int cnt = 0, idx = 0;
    while(h > 0){
        if(B[idx].second){
            cnt += (h + B[idx].first - 1) / B[idx].first;
            break;
        }else{
            h -= B[idx].first;
            cnt++;
        }
        idx++;
    }
    cout << cnt << endl;
    
    return 0;
}