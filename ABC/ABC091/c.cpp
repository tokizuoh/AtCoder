#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<pair<int, int>> R(n), B(n);

    REP(i, n) cin >> R[i].first >> R[i].second;
    REP(i, n) cin >> B[i].first >> B[i].second;

    sort(R.begin(), R.end(), greater<pair<int, int>>());
    sort(B.begin(), B.end());
    
    vector<int> F(n, true);
    for(auto x : R){
        for(auto y : B){

        }
    }

    return 0;
}